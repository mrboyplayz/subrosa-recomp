"""Native full-pool scenes including all original constraint kinds 0 through 10."""
from test_rust_kind10_step import main

if __name__ == '__main__':
    main(mixed=True, angular=True, single=True, points=True, contacts=True, surface=True, rigid_contacts=True)
