#pragma once

#include "shape2d.h"

class Square : public Shape2D{
    private:
        float side;
        void calculateArea() override;
    
    public:
        Square(float side);
};