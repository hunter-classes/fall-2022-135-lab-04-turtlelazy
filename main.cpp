#include <iostream>
#include "shapes.h"

int main(){
    std::cout << "Box 2x2:\n";
    std::cout << box(2,2);

    std::cout << "Box 4x5:\n";

    std::cout << box(4, 5);

    std::cout << "Box 1x1:\n";

    std::cout << box(1, 1);

    return 0;
}