#include <iostream>
#include "id.hpp"

int f();

int main() {
    // generate compile-time hash ids
    std::cout << $id("HELLO_WORLD") << std::endl;
    std::cout << $id("PLAYER_1") << std::endl;

    // generate sequential ids
    std::cout << $id() << std::endl;
    std::cout << $id() << std::endl;
    std::cout << $id() << std::endl;
    // resetting sequential generator is allowed
    $id() = 0;
    std::cout << $id() << std::endl;
}
