//! Default C-locale 32-bit scanner recovered from 0x14023B240.
//! Locale setup, errno storage and end-pointer publication belong to the caller.

#[repr(C)]
#[derive(Clone, Copy, Debug, PartialEq, Eq)]
pub struct ParseResult {
    pub value: u32,
    pub error: i32,
    pub end: usize,
}

fn digit(c:u8) -> Option<u32> {
    match c {
        b'0'..=b'9' => Some(u32::from(c-b'0')),
        b'a'..=b'z' => Some(u32::from(c-b'a')+10),
        b'A'..=b'Z' => Some(u32::from(c-b'A')+10),
        _ => None,
    }
}

/// Flags preserve the native scanner: bit 0 signed, bit 1 negative, bit 2
/// overflow, bit 3 digit seen. Error 0 means leave existing errno unchanged.
pub fn parse_c_integer(input:&[u8],mut base:u32,mut flags:u8) -> ParseResult {
    if base != 0 && !(2..=36).contains(&base) { return ParseResult{value:0,error:22,end:0}; }
    let at = |n:usize| input.get(n).copied().unwrap_or(0);
    let mut pos = 0;
    while matches!(at(pos),b' '|b'\t'|b'\n'|b'\r'|b'\x0b'|b'\x0c') {pos+=1;}
    let mut c=at(pos);pos+=1;
    if c==b'-' {flags|=2;}
    if c==b'-'||c==b'+' {c=at(pos);pos+=1;}
    if base==0||base==16 {
        if digit(c)!=Some(0) {
            if base==0 {base=10;}
        } else {
            let next=at(pos);
            if next==b'x'||next==b'X' {pos+=1;c=at(pos);pos+=1;base=16;}
            else if base==0 {base=8;}
        }
    }
    let mut value=0u32;
    let limit=u32::MAX/base;
    while let Some(d)=digit(c) {
        if d>=base {break;}
        if value<limit||(value==limit&&d<=u32::MAX%base) {
            value=d+base*value;flags|=8;
        } else {flags|=12;}
        c=at(pos);pos+=1;
    }
    if flags&8==0 {return ParseResult{value:0,error:0,end:0};}
    let end=pos-1;
    let signed=flags&1!=0;
    let negative=flags&2!=0;
    let overflow=flags&4!=0||(signed&&value>if negative{0x80000000}else{0x7fffffff});
    if overflow {
        return ParseResult{value:if !signed{u32::MAX}else if negative{0x80000000}else{0x7fffffff},error:34,end};
    }
    ParseResult{value:if negative{value.wrapping_neg()}else{value},error:0,end}
}

/// Native-fixture bridge for a valid, bounded C-locale input string.
/// # Safety
/// `input` must span its length, and `result` must be writable and disjoint.
#[no_mangle]
pub unsafe extern "C" fn sr_rust_parse_c_integer(input:*const u8,len:usize,base:u32,flags:u8,result:*mut ParseResult) -> i32 {
    if input.is_null()||result.is_null()||len>isize::MAX as usize {return -1;}
    unsafe {result.write(parse_c_integer(core::slice::from_raw_parts(input,len),base,flags));}
    0
}

#[cfg(test)]
mod tests {
    use super::*;
    #[test]
    fn preserves_unsigned_negation_and_signed_saturation() {
        assert_eq!(parse_c_integer(b"-1",10,0),ParseResult{value:u32::MAX,error:0,end:2});
        assert_eq!(parse_c_integer(b"2147483648x",10,1),ParseResult{value:0x7fffffff,error:34,end:10});
        assert_eq!(parse_c_integer(b"0x",0,1),ParseResult{value:0,error:0,end:0});
    }
}
