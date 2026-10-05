#ifndef CSHAPE_H
#define CSHAPE_H

#pragma once

class CShape
{
public:
    CShape();
    ~CShape();

    double getGirth();
    double getArea();
    
protected:
    void setGirth(double& value);
    void setArea(double& value);

private:
    double girth;
    double area;
};

#endif