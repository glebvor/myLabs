#pragma once

#include "shape.h"

class Shape3D : public Shape{
    private:
        float volume = 0;
        void virtual calculateVolume() = 0;
    public:
        float getVolume();

        bool operator>(Shape3D& sh);
        bool operator<(Shape3D& sh);
        bool operator==(Shape3D& sh);
};