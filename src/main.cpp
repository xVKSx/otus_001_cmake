#include "app.h"
#include <iostream>

int main() {
    std::cout << "build " << AppVersionPatch() << '\n';
    std::cout << "Hello, World!" << '\n';

    return 0;
}