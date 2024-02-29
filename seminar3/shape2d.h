#pragma once

#include "shape.h"

class Shape2D : public Shape{
    private:
        float area = 0;
        void virtual calculateArea() = 0;
    public:
        float getArea();

        bool operator>(Shape2D& sh);
        bool operator<(Shape2D& sh);
        bool operator==(Shape2D& sh);
};