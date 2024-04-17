#include "matrix/matrix.h"
#include <iostream>

int main()
{
    // Task 1
    std::cout << "For the task 1, the matrix is construct on stack.\n";
    int row, col;
    std::cout << "Enter the size of the matrix1 : [row col]\n";
    std::cin >> row >> col;
    Matrix A1(row, col);
    std::cout << "Enter the first matrix: \n";
    std::cin >> A1;

    std::cout << "Enter the size of the matrix2 : [row col]\n";
    std::cin >> row >> col;
    Matrix A2(row, col);
    std::cout << "Enter the second matrix: \n";
    std::cin >> A2;

    try
    {
        Matrix A3 = A1 + A2;
        std::cout << "The sum of the two matrices is: \n"
                  << A3;
        A3 = A1 - A2;
        std::cout << "The difference of the two matrices is: \n"
                  << A3;
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << e.what() << std::endl;
    }

    // Task 2
    std::cout << "For the task 2, the matrix is construct on heap.\n";
    Matrix *pA1, *pA2, *pA3;

    std::cout << "Enter the size of first matrix : [row col]\n";
    int row1, col1;
    std::cin >> row1 >> col1;
    pA1 = new Matrix(row1, col1);
    std::cout << "Enter the first matrix: \n";
    std::cin >> *pA1;

    std::cout << "Enter the size of second matrix : [row col]\n";
    int row2, col2;
    std::cin >> row2 >> col2;
    pA2 = new Matrix(row2, col2);
    std::cout << "Enter the second matrix: \n";
    std::cin >> *pA2;

    try
    {
        pA3 = new Matrix(*pA1 + *pA2);
        std::cout << "The sum of the two matrices is: \n"
                  << *pA3;

        *pA3 = *pA1 - *pA2;
        std::cout << "The difference of the two matrices is: \n"
                  << *pA3;
        delete pA3;
    }
    catch (std::invalid_argument &e)
    {
        std::cerr << e.what() << std::endl;
    }

    delete pA1;
    delete pA2;
    return 0;
}