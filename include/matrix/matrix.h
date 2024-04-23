#ifndef MATRIX_H_
#define MATRIX_H_

#include <iostream>

class Matrix
{
private:
    int rows, cols;
    int **data;

public:
    Matrix(int rows, int cols);
    Matrix(const Matrix &m);
    Matrix(Matrix &&m);
    ~Matrix();

    void init(std::istream &is);
    void output(std::ostream &os);

    friend std::ostream &operator<<(std::ostream &os, const Matrix &m);
    friend std::istream &operator>>(std::istream &is, Matrix &m);

    const Matrix add(const Matrix &m);
    const Matrix subtract(const Matrix &m);

    const Matrix operator+(const Matrix &m);
    const Matrix operator-(const Matrix &m);
    Matrix &operator=(const Matrix &m);
};

#endif /* MATRIX_H_ */