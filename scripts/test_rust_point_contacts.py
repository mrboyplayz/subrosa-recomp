"""Native full-pool scenes with point contact response kinds 1 and 2."""
from test_rust_kind10_step import main

if __name__ == '__main__':
    main(mixed=True, angular=True, single=True, points=True, contacts=True)
