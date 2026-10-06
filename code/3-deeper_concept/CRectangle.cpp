/* --- CRectangle.cpp --- */

/* ------------------------------------------
author: undefined
date: 2026/10/5
------------------------------------------ */
#include<iostream>
#include "CRectangle.h"
using namespace std;


CRectangle::CRectangle() {
    // Constructor
    length=0;
    width=0;
}

CRectangle::~CRectangle() {
    // Destructor
}

int CRectangle::getLength() {
    return length;
}
void CRectangle::setValues(int length,int width){
    this->length =length;
    this->width=width;
    setArea(length*width);
    setGirth(2*length+2*width);
}
int CRectangle::getWidth() {
    return width;
}
void CRectangle::showInfo(){
    cout<<"CRectangle's area:"<<getArea()<<endl;
    cout<<"CRectangle's girth:"<<getGirth()<<endl;
}

