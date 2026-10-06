
#include<iostream>
using namespace std;
#include "CShape.h"

CShape::CShape()
{
    area=0;
    girth=0;
}

CShape::~CShape()
{

}
double CShape::getGirth() {
    return girth;
}
void CShape::setGirth(double value) {
    girth = value;
}
double CShape::getArea() {
    return area;
}
void CShape::setArea(double value) {
    area = value;
}
void CShape:: showInfo(){
    cout<<"CShape's area:"<<getArea()<<endl;
    cout<<"CShape's girth:"<<getGirth()<<endl;
}

