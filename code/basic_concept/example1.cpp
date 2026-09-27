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

    int i=c1.compare(c2);

    if(i==0){
        cout<<"the values are the same"<<endl;
    }
    else if(i==1){
        cout<<"c1 is bigger than c2"<<endl;
    }else{
        cout<<"c2 is bigger than c1"<<endl;
    }

    return 0;
}