#pragma once
#include <string>
/* Declaration-only dependencies for sizeof/offsetof testing. No implementation
   is supplied: calling upstream formatting would fail at link time. */
namespace fmt { template<class... Args> std::string format(const char *, Args&&...); }
