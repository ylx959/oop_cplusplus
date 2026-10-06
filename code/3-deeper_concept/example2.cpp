#include <iostream>
#include "CShape.h"
#include "CCircle.h"
#include "CRectangle.h"

void doubleShape(CShape *pcs);

using namespace std;

//dynamic_cast
int main(){
    CCircle c;
    c.setRadius(123);
    doubleShape(&c);
    cout<<c.getArea()<<endl;


    //這樣也合法
    CRectangle r;
    r.setValues(10,5);
    doubleShape(&r);
    cout<<r.getArea()<<endl;

    return 0;
}

void doubleShape(CShape *pcs){
    /*CCircle *pcc=dynamic_cast<CCircle *>(pcs);
    pcc->setRadius(pcc->getRadius()*2);
    */
    CCircle *pcc=dynamic_cast<CCircle*>(pcs);
    if(pcc!=0){
        pcc->setRadius(pcc->getRadius()*2);
        return;
    }
    CRectangle *pcr=dynamic_cast<CRectangle*>(pcs);
    if(pcr!=0){
        pcr->setValues(pcr->getLength(),pcr->getWidth());
    }
}