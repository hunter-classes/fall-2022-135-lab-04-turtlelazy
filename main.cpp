#include <iostream>
#include "shapes.h"

int main(){
    std::cout << "Box 2x2:\n";
    std::cout << box(2,2);

    std::cout << "Box 4x5:\n";

    std::cout << box(4, 5);

    std::cout << "Box 1x1:\n";

    std::cout << box(1, 1);

    std::cout << "Box 7x4:\n";

    std::cout << box(7, 4);

    std::cout << "Checkerboard 11x6:\n";
    std::cout << checkerboard(11,6);

    std::cout << "Checkerboard 5x6:\n";
    std::cout << checkerboard(5, 6);

    std::cout << "Checkerboard 2x2:\n";
    std::cout << checkerboard(2, 2);

    std::cout << "Checkerboard 1x1:\n";
    std::cout << checkerboard(1, 1);

    std::cout << "Cross 8:\n";
    std::cout << cross(8);
    return 0;
}