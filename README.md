id <a href="https://travis-ci.org/r-lyeh/id"><img src="https://api.travis-ci.org/r-lyeh/id.svg?branch=master" align="right" /></a>
==

ID, a compile-time string hasher and sequential ID generator (C++11).

## Features
- [x] Based on code by Stefan 'Tivolo' Reinalter.
- [x] Tiny, header-only, cross-platform.
- [x] No dependencies.
- [x] ZLIB/LibPNG licensed.

## Cons
- [ ] Modern C++11 compiler required, or optimizations enabled at least.

## Sample
```c++
#include <iostream>
#include "id.hpp"

int main() {
    // generate compile-time hash ids
    std::cout << $id("HELLO_WORLD") << std::endl;
    std::cout << $id("PLAYER_1") << std::endl;

    // generate sequential ids
    std::cout << $id() << std::endl;
    std::cout << $id() << std::endl;

    // resetting sequential generator is allowed
    $id() = 0;
    std::cout << $id() << std::endl;
}
```

## Changelog
- v1.0.0 (2015/10/01)
  - Semantic versioning adherence
