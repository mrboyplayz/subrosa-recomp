import unittest

from prepare_rebuild import (CLIENT_SHA256, DEDICATED_SHA256, apply_renames,
                             build_semantic_renames, translate)


class SuitiumIdentityTests(unittest.TestCase):
    def manifest(self, digest):
        return {"sha256": digest, "functions": [
            {"address": "0x140054130", "name": "client_item"},
            {"address": "0x14003b080", "name": "server_item"},
            {"address": "0x14004af40", "name": "server_main"},
            {"address": "garbage", "name": "bad"}]}

    def test_client_does_not_use_dedicated_addresses(self):
        self.assertEqual(build_semantic_renames(self.manifest(CLIENT_SHA256)),
                         {"client_item": "sr_CreateItem"})

    def test_dedicated_does_not_use_client_addresses(self):
        self.assertEqual(build_semantic_renames(self.manifest(DEDICATED_SHA256)),
                         {"server_item": "sr_CreateItem", "server_main": "sr_ServerMain"})

    def test_unknown_image_is_not_renamed(self):
        for digest in ("", "not-the-original", "0" * 64):
            self.assertEqual(build_semantic_renames(self.manifest(digest)), {})

    def test_case_insensitive_digest(self):
        self.assertEqual(build_semantic_renames(self.manifest(CLIENT_SHA256.upper())),
                         {"client_item": "sr_CreateItem"})

    def test_member_access_with_whitespace_and_comments(self):
        source = b'''int foo(void) { return 7; }
        int f(void) { return foo() + p->   foo + s. /* gap */ foo + p->\nfoo; }
        /* foo() */ const char *s = "foo";'''
        result, count = apply_renames(source, {"foo": "sr_Foo"})
        self.assertEqual(count, 2)
        self.assertIn(b"p->   foo", result)
        self.assertIn(b"s. /* gap */ foo", result)
        self.assertIn(b"p->\nfoo", result)
        self.assertIn(b'/* foo() */ const char *s = "foo";', result)

    def test_comparison_is_not_a_member_access(self):
        result, count = apply_renames(b"x > foo();", {"foo": "sr_Foo"})
        self.assertEqual(result, b"x > sr_Foo();")
        self.assertEqual(count, 1)

    def test_address_calls_follow_semantic_definition(self):
        manifest = {"sha256": CLIENT_SHA256, "functions": [
            {"address": "0x140054130", "name": "sub_140054130"}]}
        mapping = build_semantic_renames(manifest)
        source, _ = apply_renames(b'''int sub_140054130(int x) { return x; }
        int f(void) { return MEMORY[0x140054130](2); }''', mapping)
        result, _ = translate(source, manifest["functions"], semantic_renames=mapping)
        self.assertIn(b"int sr_CreateItem(int x)", result)
        self.assertIn(b"sr_CreateItem(2)", result)


if __name__ == "__main__":
    unittest.main()
