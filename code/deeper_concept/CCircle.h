/* --- CCircle.h --- */

/* ------------------------------------------
Author: undefined
Date: 2026/10/5
------------------------------------------ */

#ifndef CCIRCLE_H
#define CCIRCLE_H

#include"CShape.h"

class CCircle :public CShape{
public:
    CCircle();
    ~CCircle();

    int getRadius();
    void setRadius(int value);

private:
    int radius;
};

#endif // CCIRCLE_H
