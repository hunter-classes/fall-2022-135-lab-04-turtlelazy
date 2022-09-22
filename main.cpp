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

    std::cout << "Cross 10:\n";
    std::cout << cross(10);

    std::cout << "Cross 1:\n";
    std::cout << cross(1);

    std::cout << "Cross 2:\n";
    std::cout << cross(2);

    std::cout << "Lower Triangle 6:\n";
    std::cout << l_triangle(6);

    std::cout << "Lower Triangle 8:\n";
    std::cout << l_triangle(8);

    std::cout << "Lower Triangle 2:\n";
    std::cout << l_triangle(2);

    std::cout << "Lower Triangle 1:\n";
    std::cout << l_triangle(1);

    std::cout << "Upper Triangle 6:\n";
    std::cout << u_triangle(6);

    std::cout << "Upper Triangle 8:\n";
    std::cout << u_triangle(8);

    std::cout << "Upper Triangle 2:\n";
    std::cout << u_triangle(2);

    std::cout << "Upper Triangle 1:\n";
    std::cout << u_triangle(1);

    std::cout << "Upside-down Trap 12x5:\n";
    std::cout << upside_down_trapezoid(12,5);

    std::cout << "Upside-down Trap 12x7:\n";
    std::cout << upside_down_trapezoid(12, 7);

    return 0;
}