#pragma once

#include <math.h>
#include "shape2d.h"

class Circle : public Shape2D{
    private:
        float radius;
        void calculateArea() override;
        std::string getName() override;
    
    public:
        Circle(float radius);
        void scale(float scaleFactor = 1) override;
        void showInfo() override;
};