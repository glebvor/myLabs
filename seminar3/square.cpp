#include "square.h"

using namespace std;

Square::Square(float side): side(side){}

void Square::scale(float scaleFactor = 1) override{
    area *= scaleFactor;
}

string Square::getName() override{
    return "Я квадрат!";
}

void Square::showInfo() override{
    getName();
    cout << "\tМоя плоадь = " << area << endl;
    cout << "\tДлина моей стороны = " << getArea() << endl;
}

void Square::calculateArea(){
    area = side * side;
}