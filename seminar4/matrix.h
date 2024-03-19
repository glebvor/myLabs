#pragma once

#include <iostream>

template<class T>
class Matrix{ 
private:
    T** data;
    int line, column;

    void CheckSize(const Matrix& mat);
    void CheckMultiplication(const Matrix& mat);

public:
    Matrix(int line, int column);
    Matrix(const Matrix& mat);
    ~Matrix();

    void fill();

    int getLine()const;
    int getColumn()const;

    int* operator[](int i)const;

    Matrix& operator+=(const Matrix& mat);

    Matrix& operator-=(const Matrix& mat);
     
    Matrix operator+(const Matrix& mat);

    Matrix operator-(const Matrix& mat);

    Matrix operator*(const Matrix& mat);

    void operator=(const Matrix& mat);

    bool operator==(const Matrix& mat);

    bool operator!=(const Matrix& mat);

    template<class Y>
    friend std::ostream& operator<<(std::ostream& os, const Matrix<Y>& mat);
};