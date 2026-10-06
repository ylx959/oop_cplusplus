#include<iostream>

#include"CShape.h"
#include"CCircle.h"
#include"CRectangle.h"

using namespace std;

// void showArea(CCircle*pcc){
//     cout<<"The area is:"<<pcc->getArea()<<endl;
// }
// void showArea(CRectangle*pcr){
//     cout<<"The area is :"<<pcr->getArea()<<endl;
// }

void showArea(CShape *pcr){
    cout<<"This area is:"<<pcr->getArea()<<endl;
}

int main(){
    //指標(pointer)
    
    CCircle c;
    c.setRadius(100);
    CShape *pcs=&c;
    CShape &rcs=c;
    pcs->showInfo();
    rcs.showInfo();
    CRectangle r;
    r.setValues(123,456);
    pcs=&r;
    pcs->showInfo();

    //是執行父類別內容
    // cout<<pcs->getArea()<<endl;
    // cout<<rcs.getGirth()<<endl;
    // cout<<"------"<<endl;
    // CRectangle r;
    // r.setValues(123,456);
    // pcs=&r;
    // cout<<pcs->getArea()<<endl;
    
    //參考(reference)
    // CShape & rcs=c;
    // cout<<rcs.getArea()<<endl;

    //集合(collection)
    /*CRectangle cr;
    cr.setValues(10,8);
    cout<<cr.getArea()<<endl;
    cout<<cr.getGirth()<<endl;

    cout<<"-----"<<endl;

    CShape* array[5];
    array[0]=&c;
    array[1]=&cr;
    array[2]=new CCircle();
    array[3]=new CRectangle();
    cout<<array[0]->getArea()<<endl;
    cout<<array[1]->getArea()<<endl;
    cout<<array[2]->getArea()<<endl;
    cout<<array[3]->getArea()<<endl;
    */

    //參數(parameter)
    // CCircle cc;
    // cc.setRadius(100);
    // CRectangle cr;
    // cr.setValues(12,3);
    // showArea(&cc);
    // showArea(&cr);

    // CShape cs;
    // cout<<cs.getArea()<<endl;

    // CCircle cc;
    // cc.setRadius(10);
    // cout<<cc.getRadius()<<endl;

    // cout<<"-----"<<endl;

    // cs=cc;
    // cout<<cs.getArea()<<endl;
    // cc.setRadius(100);

    // cout<<cc.getArea()<<endl;
    // cout<<cs.getArea()<<endl;

    // cout<<cs.getGirth()<<endl;
    // cout<<cc.getGirth()<<endl;
    


    return 0;

}
