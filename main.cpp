#include <iostream>
#include "shapes.h"

int main(){
    std::cout << "Box 2x2:\n";
    std::cout << box(2,2) << "\n";

    std::cout << "Box 4x5:\n";

    std::cout << box(4, 5) << "\n";

    std::cout << "Box 1x1:\n";

    std::cout << box(1, 1) << "\n";

    std::cout << "Box 7x4:\n";

    std::cout << box(7, 4) << "\n";

    std::cout << "Checkerboard 11x6:\n";
    std::cout << checkerboard(11, 6) << "\n";

    std::cout << "Checkerboard 5x6:\n";
    std::cout << checkerboard(5, 6) << "\n";

    std::cout << "Checkerboard 2x2:\n";
    std::cout << checkerboard(2, 2) << "\n";

    std::cout << "Checkerboard 1x1:\n";
    std::cout << checkerboard(1, 1) << "\n";

    std::cout << "Cross 8:\n";
    std::cout << cross(8) << "\n";

    std::cout << "Cross 10:\n";
    std::cout << cross(10) << "\n";

    std::cout << "Cross 1:\n";
    std::cout << cross(1) << "\n";

    std::cout << "Cross 2:\n";
    std::cout << cross(2) << "\n";

    std::cout << "Lower Triangle 6:\n";
    std::cout << l_triangle(6) << "\n";

    std::cout << "Lower Triangle 8:\n";
    std::cout << l_triangle(8) << "\n";

    std::cout << "Lower Triangle 2:\n";
    std::cout << l_triangle(2) << "\n";

    std::cout << "Lower Triangle 1:\n";
    std::cout << l_triangle(1) << "\n";

    std::cout << "Upper Triangle 6:\n";
    std::cout << u_triangle(6) << "\n";

    std::cout << "Upper Triangle 8:\n";
    std::cout << u_triangle(8) << "\n";

    std::cout << "Upper Triangle 2:\n";
    std::cout << u_triangle(2) << "\n";

    std::cout << "Upper Triangle 1:\n";
    std::cout << u_triangle(1) << "\n";

    std::cout << "Upside-down Trap 12x5:\n";
    std::cout << upside_down_trapezoid(12, 5) << "\n";

    std::cout << "Upside-down Trap 12x7:\n";
    std::cout << upside_down_trapezoid(12, 7) << "\n";

    std::cout << "Upside-down Trap 10x5:\n";
    std::cout << upside_down_trapezoid(10, 5) << "\n";

    std::cout << "Upside-down Trap 11x6:\n";
    std::cout << upside_down_trapezoid(11, 6) << "\n";

    std::cout << "Upside-down Trap 15x1:\n";
    std::cout << upside_down_trapezoid(15, 1) << "\n";

    std::cout << "3by3 Checkerboard 16x11:\n";
    std::cout << checkerboard_3x3(16, 11) << "\n";

    std::cout << "3by3 Checkerboard 27x27:\n";
    std::cout << checkerboard_3x3(27, 27) << "\n";

    std::cout << "3by3 Checkerboard 1x1:\n";
    std::cout << checkerboard_3x3(1, 1) << "\n";

    std::cout << "3by3 Checkerboard 3x3:\n";
    std::cout << checkerboard_3x3(3, 3) << "\n";

    std::cout << "3by3 Checkerboard 27x3:\n";
    std::cout << checkerboard_3x3(27, 3) << "\n";

    std::cout << "3by3 Checkerboard 3x27:\n";
    std::cout << checkerboard_3x3(3, 27) << "\n";

    std::cout << "3by3 Checkerboard 27x1:\n";
    std::cout << checkerboard_3x3(27, 1) << "\n";

    std::cout << "3by3 Checkerboard 1x27:\n";
    std::cout << checkerboard_3x3(1, 27) << "\n";

    return 0;
}