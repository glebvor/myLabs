#include "square.h"

using namespace std;

Square::Square(float side): side(side){}

void Square::scale(float scaleFactor = 1) override{
    area *= scaleFactor;
}

string Square::getName() override{
    return "� ������!";
}

void Square::showInfo() override{
    getName();
    cout << "\t��� ������ = " << area << endl;
    cout << "\t����� ���� ��஭� = " << getArea() << endl;
}

void Square::calculateArea(){
    area = side * side;
}