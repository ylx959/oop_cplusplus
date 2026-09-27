#include<iostream>
using namespace std;

#include "Circle.h"

int main(){
    Circle c1;
    c1.radius =11;

    Circle c2;
    c2.radius=14;

    cout<<c1.getGirth()<<endl;
    cout<<c2.getGirth()<<endl;

    // cout<<"c1:before: "<<&c1<<endl;
    // c1=c2;
    // cout<<"c1:after: "<<&c1<<endl;

    //compare:
    int i=c1.compare(c2);//注意compare function 是把c2 值複製出去跟c1做比對所以就算 在compare 中改動c2值 也不會有任何實質改動

    if(i==0){
        cout<<"the values are the same"<<endl;
    }
    else if(i==1){
        cout<<"c1 is bigger than c2"<<endl;
    }else{
        cout<<"c2 is bigger than c1"<<endl;
    }

    //copy:
    Circle c3;
    c3=c1.copy();

    cout<<"c3's radius:"<<c3.radius<<endl;

    return 0;
}