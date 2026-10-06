#include <iostream>
using namespace std;

#include "myheader.h"

int main(){
    Circle c1;
    c1.setRadius(10);
    cout<<c1.getArea()<<endl;
    cout<<c1.getGirth()<<endl;

    
    Retangle r1;
    cout<<r1.getArea()<<endl;
    cout<<r1.getGirth()<<endl;
    return 0;
}
