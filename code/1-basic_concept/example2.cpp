#include<iostream>
using namespace std;

#include"Circle.h"

//#define max 10000
//#typedef double radius; 

int main(){
    // Circle *pc1;
    // Circle *pc2=new Circle;

    // pc1=new Circle();

    // cout<<pc1<<endl;
    // cout<<pc2<<endl;
    // cout<<"---------------------"<<endl;

    //delete pc2;
    // pc2=pc1;//兩個指標參考同一個物件
    // cout<<pc1<<endl;
    // cout<<pc2<<endl; 

    // cout<<"---------------------"<<endl;

    // Circle c;
    // Circle *pc3=&c;
    // cout<<&c<<endl;
    // cout<<pc3<<endl;
    // cout<<"---------------------"<<endl;

    // Circle *pc1=new Circle();
    // pc1->radius=10;
    // private member 不能改
    //  pc1->girth=123;
    // cout<<pc1->getGirth()<<endl;

    // Circle c;
    // c.radius=10;

    //會用指向的 而不是像compare 用複製的
    // int i=pc1->compare_ptr(&c);
    // cout<<i<<endl;

    // Circle*pc2=new Circle();
    // pc2->radius=30;
    // int i2=pc1->compare_ptr(pc2);
    // cout<<i2<<endl;

    //語法合法 但沒意義
    // int i3=pc1->compare_ptr(new Circle());
    // cout<<i3<<endl;

    //copy2
    // Circle *pc1=new Circle();
    // pc1->radius=10;

    // Circle c;
    // c.radius=123;
    // pc1->copy2(&c);

    // cout<<pc1<<endl;
    // cout<<&c<<endl;
    // cout<<c.radius<<endl;

    //copy3
    Circle *pc1=new Circle();
    pc1->radius=10;

    Circle *pc2=new Circle();
    pc1->copy3(pc2);
    cout<<pc2->radius<<endl;

    Circle *pc3=new Circle();
    int i=pc1->compare_ptr(pc1->copy3(pc3));
    cout<<i<<endl;
    

    return 0;
}