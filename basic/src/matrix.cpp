#include "matrix/matrix.h"

Matrix::Matrix(int rows, int cols): rows(rows), cols(cols)
{
    data = new double*[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new double[cols];
    }
}

Matrix::Matrix(const Matrix& m): rows(m.rows), cols(m.cols)
{
    data = new double*[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new double[cols];
        for (int j = 0; j < cols; j++)
        {
            data[i][j] = m.data[i][j];
        }
    }
}

Matrix::Matrix(Matrix&& m): rows(m.rows), cols(m.cols), data(m.data)
{
    m.data = nullptr;
}

Matrix::~Matrix()
{
    for (int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

const Matrix Matrix::operator+(const Matrix& m)
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] + m.data[i][j];
        }
    }
    return result;
}

const Matrix Matrix::operator-(const Matrix& m)
{
    Matrix result(rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result.data[i][j] = data[i][j] - m.data[i][j];
        }
    }
    return result;
}

Matrix& Matrix::operator=(const Matrix& m)
{
    if (this == &m)
    {
        return *this;
    }
    for (int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;
    rows = m.rows;
    cols = m.cols;
    data = new double*[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new double[cols];
        for (int j = 0; j < cols; j++)
        {
            data[i][j] = m.data[i][j];
        }
    }
    return *this;
}

std::ostream& operator<<(std::ostream& os, const Matrix& m)
{
    for (int i = 0; i < m.rows; i++)
    {
        for (int j = 0; j < m.cols; j++)
        {
            os << m.data[i][j] << " ";
        }
        os << std::endl;
    }
    return os;
}

std::istream& operator>>(std::istream& is, Matrix& m)
{
    for (int i = 0; i < m.rows; i++)
    {
        for (int j = 0; j < m.cols; j++)
        {
            is >> m.data[i][j];
        }
    }
    return is;
}