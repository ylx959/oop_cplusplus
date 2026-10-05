#ifndef CSHAPE_H
#define CSHAPE_H

#pragma once

class CShape
{
public:
    CShape();
    virtual ~CShape();
 
    double getGirth();
    void setGirth(double value);
    double getArea();
    void setArea(double value);

private:
    double girth;
    double  area;
};

#endif