#include<iostream>

#include "Circle.h"

using namespace std;

int main(){
    /*Circle c1;
    c1.radius=10;
    Circle &rc1=c1;//參考要立刻指派
    cout<<rc1.getArea()<<endl;
    */

    /*Circle c1,c2;
    c1.radius=10;
    c2.radius=10;
    cout<<c1.compare(c2)<<endl;
    cout<<c1.compare_ptr(&c2)<<endl;
    cout<<c1.compare3(c2)<<endl;//要給已存在物件 不會複製一份 會給記憶體位置
    */

    /*Circle c1,c2;
    c1.radius=20;
    c1.copy4(c2);
    cout<<c1.compare3(c1.copy4(c2))<<endl;
    */

    /*Circle *pc1=new Circle();
    Circle &rc1=*pc1;
    Circle c1;
    c1.radius=10;
    pc1->radius=10;
    cout<<c1.compare3(*pc1)<<endl;
    */

    /*Circle *pc1=new Circle();
    pc1->radius=10;

    Circle *&rpc1=pc1;// Circle* 指標變數的 reference(＆一般是要指派物件，＊＆這裡是指派指標)
    rpc1->radius=100;
    cout<<pc1->getArea()<<endl;
    cout<<pc1->compare3(*pc1)<<endl;
    */

    /*Circle c1;
    c1.radius=10;
    Circle *pc1=new Circle();
    pc1->radius=20;
    cout<<c1.compare4(pc1)<<endl;
    */

    Circle c1;
    c1.radius=10;
    Circle *pc1=new Circle();
    pc1->radius=20;
    cout<<c1.compare4(c1.copy5(pc1))<<endl;
    cout<<pc1->radius<<endl;


    return 0;
}