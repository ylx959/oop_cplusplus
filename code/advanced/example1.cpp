#include<iostream>
#include "Circle.h"

using namespace std;

int main(){
    Circle c1;
    c1.setHeight(10);
    c1.setRadius(10);
    

    cout<<c1.getArea()<<endl;
    cout<<c1.getGirth()<<endl;
    cout<<c1.getVolume()<<endl;

    return 0;
    
}