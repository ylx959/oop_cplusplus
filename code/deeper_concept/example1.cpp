#include<iostream>

#include"CShape.h"
#include"CCircle.h"

using namespace std;

int main(){
    CShape cs;
    cout<<cs.getArea()<<endl;

    CCircle cc;
    cc.setRadius(10);
    cout<<cc.getRadius()<<endl;
    cout<<cc.getArea()<<endl;

    return 0;
}