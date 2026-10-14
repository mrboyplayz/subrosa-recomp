"""List OpenGL calls in src/client with the number of arguments each call site passes.

Usage: python tools/audits/gl_call_args.py [--all]
Without --all, only functions whose call sites disagree with ARITY (or have no entry) are shown.
"""
import glob, os, re, sys

ROOT = os.path.join(os.path.dirname(__file__), "..", "..")
ARITY = {
    "glActiveTexture": 1, "glAttachShader": 2, "glBeginTransformFeedback": 1, "glBindAttribLocation": 3,
    "glBindBuffer": 2, "glBindBufferBase": 3, "glBindFramebuffer": 2, "glBindRenderbuffer": 2,
    "glBindTexture": 2, "glBindVertexArray": 1, "glBlendFunc": 2, "glBlendFuncSeparate": 4,
    "glBlitFramebuffer": 10, "glBufferData": 4, "glBufferSubData": 4, "glCheckFramebufferStatus": 1,
    "glClear": 1, "glClearColor": 4, "glClearDepth": 1, "glClearStencil": 1, "glColorMask": 4,
    "glCompileShader": 1, "glCreateProgram": 0, "glCreateShader": 1, "glCullFace": 1,
    "glDeleteBuffers": 2, "glDeleteFramebuffers": 2, "glDeleteProgram": 1, "glDeleteRenderbuffers": 2,
    "glDeleteShader": 1, "glDeleteTextures": 2, "glDeleteVertexArrays": 2, "glDepthFunc": 1,
    "glDepthMask": 1, "glDepthRange": 2, "glDisable": 1, "glDisableVertexAttribArray": 1,
    "glDrawArrays": 3, "glDrawBuffer": 1, "glDrawBuffers": 2, "glDrawElements": 4,
    "glDrawElementsBaseVertex": 5, "glDrawRangeElements": 6, "glEnable": 1,
    "glEnableVertexAttribArray": 1, "glEndTransformFeedback": 0, "glFramebufferRenderbuffer": 4,
    "glFramebufferTexture": 4, "glFramebufferTexture2D": 5, "glFramebufferTextureLayer": 5,
    "glFrontFace": 1, "glGenBuffers": 2, "glGenFramebuffers": 2, "glGenRenderbuffers": 2,
    "glGenTextures": 2, "glGenVertexArrays": 2, "glGenerateMipmap": 1, "glGetAttribLocation": 2,
    "glGetError": 0, "glGetIntegerv": 2, "glGetProgramInfoLog": 4, "glGetProgramiv": 3,
    "glGetShaderInfoLog": 4, "glGetShaderiv": 3, "glGetString": 1, "glGetUniformLocation": 2,
    "glLineWidth": 1, "glLinkProgram": 1, "glMultiDrawElements": 5, "glMultiDrawElementsBaseVertex": 6,
    "glPixelStorei": 2, "glPointSize": 1, "glPolygonMode": 2, "glPolygonOffset": 2, "glReadBuffer": 1,
    "glReadPixels": 7, "glRenderbufferStorage": 4, "glRenderbufferStorageMultisample": 5,
    "glScissor": 4, "glShaderSource": 4, "glStencilFunc": 3, "glStencilFuncSeparate": 4,
    "glStencilMask": 1, "glStencilOp": 3, "glStencilOpSeparate": 4, "glTexImage2D": 9,
    "glTexImage2DMultisample": 6, "glTexImage3D": 10, "glTexParameterf": 3, "glTexParameteri": 3,
    "glTexParameterfv": 3, "glTexSubImage2D": 9, "glTexSubImage3D": 11, "glTransformFeedbackVaryings": 4,
    "glUniform1f": 2, "glUniform1i": 2, "glUniform2f": 3, "glUniform3f": 4, "glUniform4f": 5,
    "glUniform1fv": 3, "glUniform2fv": 3, "glUniform3fv": 3, "glUniform4fv": 3, "glUniform1iv": 3,
    "glUniformMatrix3fv": 4, "glUniformMatrix4fv": 4, "glUseProgram": 1, "glVertexAttrib4f": 5,
    "glVertexAttribIPointer": 5, "glVertexAttribPointer": 6, "glViewport": 4, "glVertexAttrib3f": 4,
    "glVertexAttrib1f": 2, "glVertexAttrib2f": 3, "glCompressedTexImage2D": 8, "glGetTexImage": 5,
    "glCopyTexSubImage2D": 8, "glCopyTexImage2D": 8, "glFinish": 0, "glFlush": 0, "glHint": 2,
    "glVertexAttribDivisor": 2, "glDrawArraysInstanced": 4, "glDrawElementsInstanced": 5,
    "glValidateProgram": 1, "glIsEnabled": 1, "glGetFloatv": 2, "glTexImage1D": 8, "glSampleCoverage": 2,
    "glBlendEquation": 1, "glBlendColor": 4, "glBindFragDataLocation": 3, "glClearBufferfv": 3,
    "glGetBufferSubData": 4, "glMapBuffer": 2, "glUnmapBuffer": 1, "glMapBufferRange": 4,
    "glLogicOp": 1, "glGetBooleanv": 2, "glGetDoublev": 2, "glTexParameteriv": 3, "glGetStringi": 2,
    "glDeleteSync": 1, "glFenceSync": 2, "glClientWaitSync": 3, "glIsTexture": 1, "glDetachShader": 2,
    "glGetTexParameteriv": 3, "glGetTexLevelParameteriv": 4, "glColorMaski": 5, "glEnablei": 2,
    "glDisablei": 2, "glProvokingVertex": 1,
}


def split_args(text, start):
    """text[start] is '('; return (list of args, index after ')')."""
    depth, args, cur, i = 0, [], [], start
    while i < len(text):
        c = text[i]
        if c in "([{":
            depth += 1
            if depth > 1:
                cur.append(c)
        elif c in ")]}":
            depth -= 1
            if depth == 0:
                a = "".join(cur).strip()
                if a or args:
                    args.append(a)
                return args, i + 1
            cur.append(c)
        elif c == "," and depth == 1:
            args.append("".join(cur).strip())
            cur = []
        else:
            cur.append(c)
        i += 1
    return args, i


def main():
    show_all = "--all" in sys.argv
    slots = []
    for line in open(os.path.join(ROOT, "tools", "native-compare", "gl_slots.txt")):
        if line.startswith("#") or not line.strip():
            continue
        name, addr, sym = line.split(None, 2)
        slots.append((name, sym.strip()))
    sources = sorted(glob.glob(os.path.join(ROOT, "src", "client", "*.c")))
    texts = {p: open(p, encoding="utf-8", errors="replace").read() for p in sources}
    for name, sym in slots:
        sites = []
        pat = re.compile(re.escape(sym) + r"(?![0-9A-Za-z_])")
        for p, text in texts.items():
            for m in pat.finditer(text):
                # walk forward over closing parens of a cast wrapper to the call's '('
                j = m.end()
                while j < len(text) and text[j] in ") \t":
                    j += 1
                if j >= len(text) or text[j] != "(":
                    continue
                before = text[max(0, m.start() - 3):m.start()]
                args, _ = split_args(text, j)
                line_no = text.count("\n", 0, m.start()) + 1
                sites.append((os.path.basename(p), line_no, len(args), args))
        if not sites:
            continue
        want = ARITY.get(name)
        bad = [s for s in sites if want is None or s[2] != want]
        if show_all or bad:
            print("%s (%s): want %s, %d sites" % (name, sym, want, len(sites)))
            for f, ln, n, args in (sites if show_all else bad):
                print("   %s:%d  %d args: %s" % (f, ln, n, ", ".join(a[:40] for a in args)[:200]))


main()
