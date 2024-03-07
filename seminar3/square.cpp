#include "square.h"

using namespace std;

Square::Square(float side): side(side){}

void Square::scale(float scaleFactor = 1){
    area *= scaleFactor;
}

string Square::getName(){
    return "Я квадрат!";
}

void Square::showInfo(){
    getName();
    cout << "\tМоя плоадь = " << area << endl;
    cout << "\tДлина моей стороны = " << getArea() << endl;
}

void Square::calculateArea(){
    area = side * side;
}