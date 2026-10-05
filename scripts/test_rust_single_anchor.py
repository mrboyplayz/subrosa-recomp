"""Native full-pool constraint scenes including kind-4 single-body anchors."""
from test_rust_kind10_step import main

if __name__ == '__main__':
    main(mixed=True, angular=True, single=True)
