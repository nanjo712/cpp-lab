#include "matrix/matrix.h"
#include <iostream>

int main()
{
    Matrix *A1 = new Matrix(4, 5);
    Matrix *A2 = new Matrix(4, 5);
    Matrix *A3 = new Matrix(4, 5);
    std::cout << "Enter the first matrix 4x5: \n";
    A1->init(std::cin);
    std::cout << "Enter the second matrix 4x5: \n";
    A2->init(std::cin);
    *A3 = A1->add(*A2);
    std::cout << "The sum of the two matrices is: \n";
    A3->output(std::cout);
    *A3 = A1->subtract(*A2);
    std::cout << "The difference of the two matrices is: \n";
    A3->output(std::cout);
    delete A1;
    delete A2;
    delete A3;
    return 0;
}