#include "square.h"

using namespace std;

Square::Square(float side): side(side){}

void Square::scale(float scaleFactor = 1){
    area *= scaleFactor;
}

string Square::getName(){
    return "� ������!";
}

void Square::showInfo(){
    getName();
    cout << "\t��� ������ = " << area << endl;
    cout << "\t����� ���� ��஭� = " << getArea() << endl;
}

void Square::calculateArea(){
    area = side * side;
}