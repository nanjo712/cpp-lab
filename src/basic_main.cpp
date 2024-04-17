#include "matrix/matrix.h"
#include <iostream>

int main()
{
    Matrix *A1 = new Matrix(4, 5);
    Matrix *A2 = new Matrix(4, 5);
    Matrix *A3 = new Matrix(4, 5);

    std::cout << "Enter the first matrix 4x5: \n";
    std::cin >> *A1; // A1->init(std::cin); 这是一种等价的写法

    std::cout << "Enter the second matrix 4x5: \n";
    std::cin >> *A2; // A2->init(std::cin); 这是一种等价的写法

    *A3 = *A1 + *A2; // *A3 = A1->add(*A2);
    std::cout << "The sum of the two matrices is: \n";
    std::cout << *A3; // A3->output(std::cout); 这是一种等价的写法

    *A3 = *A1 - *A2; // *A3 = A1->subtract(*A2);
    std::cout << "The difference of the two matrices is: \n";
    std::cout << *A3; // A3->output(std::cout); 这是一种等价的写法

    delete A1;
    delete A2;
    delete A3;

    return 0;
}