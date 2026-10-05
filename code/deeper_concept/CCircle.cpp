/* --- CCircle.cpp --- */

/* ------------------------------------------
author: undefined
date: 2026/10/5 
------------------------------------------ */

#include "CCircle.h"

CCircle::CCircle() {
    // Constructor
    radius=0;
}

CCircle::~CCircle() {
    // Destructor
}

int CCircle::getRadius() {
    return radius;
}
void CCircle::setRadius(int value) {
    radius = value;
    setArea(radius*radius*3.14);
    setGirth(radius*2*3.14);
}
