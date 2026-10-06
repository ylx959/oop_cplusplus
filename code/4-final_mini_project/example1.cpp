#include <iostream>
using namespace std;

#include "CShape.h"
#include "CCircle.h"

int main(){
    CCircle cc;
    cc.setRadius(10);
    cout<<cc.getArea()<<endl;
    //delete cs如果 用new 的話
    return 0;
}