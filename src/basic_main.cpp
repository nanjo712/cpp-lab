#include "matrix/matrix.h"
#include <iostream>

int main()
{
    Matrix A1(4, 5), A2(4, 5), A3(4, 5);
    std::cout << "Enter the first matrix 4x5: \n";
    std::cin >> A1;
    std::cout << "Enter the second matrix 4x5: \n";
    std::cin >> A2;
    A3 = A1 + A2;
    std::cout << "The sum of the two matrices is: \n"
              << A3;
    A3 = A1 - A2;
    std::cout << "The difference of the two matrices is: \n"
              << A3;
    return 0;
}