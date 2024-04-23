#include "matrix/matrix.h"

Matrix::Matrix(int rows, int cols) : rows(rows), cols(cols)
{
    data = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new int[cols];
    }
}

Matrix::Matrix(const Matrix &m) : rows(m.rows), cols(m.cols)
{
    data = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            data[i][j] = m.data[i][j];
        }
    }
}

Matrix::Matrix(Matrix &&m) : rows(m.rows), cols(m.cols), data(m.data)
{
    // 移动语义，避免资源拷贝
    m.data = nullptr;
}

Matrix::~Matrix()
{
    // 释放资源
    for (int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;
}

// 加法操作的函数接口
const Matrix Matrix::add(const Matrix &m)
{
    // 检查矩阵维度是否相同
    if (rows != m.rows || cols != m.cols)
    {
        throw std::invalid_argument("Matrix dimensions do not match.");
    }

    // 计算矩阵和
    Matrix tmp(rows, cols);
    tmp = *this + m;
    return tmp;
}

// 减法操作的函数接口
const Matrix Matrix::subtract(const Matrix &m)
{
    // 检查矩阵维度是否相同
    if (rows != m.rows || cols != m.cols)
    {
        throw std::invalid_argument("Matrix dimensions do not match.");
    }

    // 计算矩阵差
    Matrix tmp(rows, cols);
    tmp = *this - m;
    return tmp;
}

const Matrix Matrix::operator+(const Matrix &m)
{
    // 检查矩阵维度是否相同
    if (rows != m.rows || cols != m.cols)
    {
        throw std::invalid_argument("Matrix dimensions do not match.");
    }

    // 计算矩阵和
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

const Matrix Matrix::operator-(const Matrix &m)
{
    // 检查矩阵维度是否相同
    if (rows != m.rows || cols != m.cols)
    {
        throw std::invalid_argument("Matrix dimensions do not match.");
    }

    // 计算矩阵差
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

Matrix &Matrix::operator=(const Matrix &m)
{
    // 检查自赋值
    if (this == &m)
    {
        return *this;
    }

    // 释放原有资源
    for (int i = 0; i < rows; i++)
    {
        delete[] data[i];
    }
    delete[] data;

    // 分配新资源并复制数据
    rows = m.rows;
    cols = m.cols;
    data = new int *[rows];
    for (int i = 0; i < rows; i++)
    {
        data[i] = new int[cols];
        for (int j = 0; j < cols; j++)
        {
            data[i][j] = m.data[i][j];
        }
    }
    return *this;
}

// 初始化矩阵，对输入流操作的封装，提供函数接口
void Matrix::init(std::istream &is)
{
    is >> *this;
}

// 初始化矩阵，对输出流操作的封装，提供函数接口
void Matrix::output(std::ostream &os)
{
    os << *this;
}

// 友元函数，重载输出运算符
std::ostream &operator<<(std::ostream &os, const Matrix &m)
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

// 友元函数，重载输出运算符
std::istream &operator>>(std::istream &is, Matrix &m)
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