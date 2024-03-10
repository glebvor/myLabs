#ifndef TRIANGULARPYRAMID_H
#define TRIANGULARPYRAMID_H

#include "shape3d.h"

class TriangularPyramid : public Shape3D{
    private:
        float height;
        void calculateVolume() override;
        std::string getName() override;
        Triangle tr;
    
    public:
        TriangularPyramid(float baset, float heightt, float height);
        void scale(float scaleFactor = 1) override;
        void showInfo() override;
};

#endif