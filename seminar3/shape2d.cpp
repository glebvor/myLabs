#include "shape2d.h"

Shape2D::Shape2D(float area): area(area){}

float Shape2D::getArea(){return area;}

bool Shape2D::operator>(Shape2D& sh){return area > sh.getArea();}
bool Shape2D::operator<(Shape2D& sh){return area < sh.getArea();}
bool Shape2D::operator==(Shape2D& sh){return area == sh.getArea();}