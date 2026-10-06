/* --- CRectangle.h --- */

/* ------------------------------------------
Author: undefined
Date: 2026/10/5
------------------------------------------ */

#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include"CShape.h"

class CRectangle :public CShape {
public:
    CRectangle();
    virtual~CRectangle();

    void setValues(int length,int width);
    int getWidth();
    int getLength();
    virtual void showInfo();

private:
    int length;
    int width;
};

#endif // CRECTANGLE_H
