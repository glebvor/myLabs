#pragma once

#include "shape2d.h"

class Square : public Shape2D{
    private:
        float side;
        void calculateArea() override;
        std::string getName() override;
    
    public:
        Square(float side);
        void scale(float scaleFactor = 1) override;
        void showInfo() override;

};