#include<iostream>
using namespace std;

#include"Circle.h"

//#define max 10000
//#typedef double radius; 

int main(){
    Circle *pc1;
    Circle *pc2=new Circle;

    pc1=new Circle();

    cout<<pc1<<endl;
    cout<<pc2<<endl;
    cout<<"---------------------"<<endl;

    pc2=pc1;//兩個指標參考同一個物件
    cout<<pc1<<endl;
    cout<<pc2<<endl; 

    return 0;
}