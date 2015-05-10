id <a href="https://travis-ci.org/r-lyeh/id"><img src="https://api.travis-ci.org/r-lyeh/id.svg?branch=master" align="right" /></a>
==

- Lightweight compile-time string hashes and sequential IDs generator. Written in C++11.
- Requires modern compiler, or optimizations enabled at least.
- Based on code by Stefan 'Tivolo' Reinalter.
- Tiny. Header only.
- Cross platform.
- No dependencies.
- zlib/libpng licensed.

sample
------
```
#include <iostream>
#include "id.hpp"

int main() {
    // generate compile-time hash ids
    std::cout << $id(HELLO_WORLD) << std::endl;
    std::cout << $id(PLAYER_1) << std::endl;

    // generate sequential ids
    std::cout << $id() << std::endl;
    std::cout << $id() << std::endl;

    // resetting sequential generator is allowed
    $id() = 0;
    std::cout << $id() << std::endl;
}
```
