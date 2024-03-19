#include "matrix.h"

using namespace std;

template<class T>
void Matrix<T>::CheckSize(const Matrix<T>& mat){
    if(line != mat.getLine() || column != mat.getColumn()){
        cout << "Матрицы разного размера";
        exit(EXIT_FAILURE);
    }
}

template<class T>
void Matrix<T>::CheckMultiplication(const Matrix<T>& mat){
    if(column != mat.getLine()){
        cout << "Матрицы нельзя умножить";
        exit(EXIT_FAILURE);
    }
}

template<class T>
Matrix<T>::Matrix(int line, int column): line(line), column(column){
    data = new int*[line];
    for(int j = 0; j < line; ++j){
        data[j] = new int[column];
    }
}

template<class T>
Matrix<T>::Matrix(const Matrix<T>& mat){
    line = mat.getLine();
    column = mat.getColumn();
    data = new int*[line];
    for(int j = 0; j < line; ++j){
        data[j] = new int[column];
    }
    for(int j = 0; j < line; ++j){
        for(int i = 0; i < column; ++i){
            data[j][i] = mat[j][i];
        }
    }
}

template<class T>
Matrix<T>::~Matrix(){
    for(int j = 0; j < line; ++j){
        delete[] data[j];
    }
    delete[] data;
}

template<class T>
void Matrix<T>::fill(){
    for(int j = 0; j < line; ++j){
        for(int i = 0; i < column; ++i){
            data[j][i] = rand()%10;
        }
    }
}

template<class T>
int Matrix<T>::getLine()const{return line;}

template<class T>
int Matrix<T>::getColumn()const{return column;}

template<class T>
int* Matrix<T>::operator[](int i)const{return data[i];}

template<class T>
Matrix<T>& Matrix<T>::operator+=(const Matrix<T>& mat){
    CheckSize(mat);
    for(int j = 0; j < line; ++j){
        for(int i = 0; i < column; ++i){
            data[j][i] += mat[j][i];
        }
    }
    return *this;
}

template<class T>
Matrix<T>& Matrix<T>::operator-=(const Matrix<T>& mat){
    CheckSize(mat);
    for(int j = 0; j < line; ++j){
        for(int i = 0; i < column; ++i){
            data[j][i] -= mat[j][i];
        }
    }
    return *this;
}

template<class T>
Matrix<T> Matrix<T>::operator+(const Matrix<T>& mat){
    CheckSize(mat);
    Matrix temp = *this;
    temp += mat;
    return temp;
}

template<class T>
Matrix<T> Matrix<T>::operator-(const Matrix<T>& mat){
    CheckSize(mat);
    Matrix temp = *this;
    temp -= mat;
    return temp;
}

template<class T>
Matrix<T> Matrix<T>::operator*(const Matrix<T>& mat){
    CheckMultiplication(mat);
    Matrix temp(line, mat.getColumn());
    for(int j = 0; j < line; ++j){
        for(int i = 0; i < mat.getColumn(); ++i){
            temp[j][i] = 0;
        }
    }
    for(int i = 0; i < line; ++i){
        for(int j = 0; j < mat.getColumn(); ++j){
            for(int k = 0; k < column; ++k){
                temp[i][j] += data[i][k] * mat[k][j];
            }
        }
    }
    return temp;
}

template<class T>
void Matrix<T>::operator=(const Matrix<T>& mat){
    this->~Matrix();
    line = mat.getLine();
    column = mat.getColumn();
    data = new int*[line];
    for(int j = 0; j < line; ++j){
        data[j] = new int[column];
    }
    for(int j = 0; j < line; ++j){
        for(int i = 0; i < column; ++i){
            data[j][i] = mat[j][i];
        }
    }
}

template<class T>
bool Matrix<T>::operator==(const Matrix<T>& mat){
    if(line == mat.getLine() && column == mat.getColumn()){
        for(int j = 0; j < line; ++j){
            for(int i = 0; i < mat.getColumn(); ++i){
                if(data[j][i] != mat[j][i]){return false;}
            }
        }
        return true;
    }
    else{return false;}
}

template<class T>
bool Matrix<T>::operator!=(const Matrix<T>& mat){
    if(*this == mat){return false;}
    else{return true;}
}

template<class Y>
ostream& operator<<(ostream& os, const Matrix<Y>& mat){
    int maxlen = 0;
    string s;
    for(int i = 0; i < mat.line; ++i){
        for(int j = 0; j < mat.column; ++j){
            s = to_string(mat[i][j]);
            if(s.length() > maxlen){
                maxlen = s.length();
            }
        }
    }
    for(int i = 0; i < mat.line; ++i){
        for(int j = 0; j < mat.column; ++j){
            s = to_string(mat[i][j]);
            os << string(maxlen - s.length(), ' ') << mat[i][j] << " ";
        }
        os << "\n";
    }
    return os;
}