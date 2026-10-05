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

