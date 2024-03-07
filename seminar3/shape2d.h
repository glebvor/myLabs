#pragma once

#include "shape.h"
#include "square.h"
#include "triangle.h"
#include "circle.h"

class Shape2D : public Shape{
    private:
        float area = 0;
        void virtual calculateArea() = 0;
    public:

        Shape2D(float area);

        float getArea();

        bool operator>(Shape2D& sh);
        bool operator<(Shape2D& sh);
        bool operator==(Shape2D& sh);

        // friend class Square;
        // friend class Triangle;
        // friend class Circle;
};