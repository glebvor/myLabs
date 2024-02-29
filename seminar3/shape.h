#pragma once

#include <string>
#include "shape2d.h"
#include "shape3d.h"

class Shape{
    public:
        void virtual scale(float scaleFactor) = 0;
        void virtual showInfo() = 0;
        std::string virtual getName() = 0;
};