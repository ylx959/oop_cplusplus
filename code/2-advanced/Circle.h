#include<string>

using namespace std;

class Circle{
private:
    int radius;
    int height;
    string name;
public:
    Circle(){
        name="unset";
        radius=1;
        height=1;
    }
    void setRadius(int value);
    void setHeight(int value);
    double getArea();
    double getGirth();
    double getVolume();

    string getName();
    void setName(string n);
};

void Circle:: setRadius(int value){
    if(value>0 && value<1000){
        radius=value;
    }
}

void Circle:: setHeight(int value){
    if(value>0 && value<1000){
        height=value;
    }
}

double Circle :: getArea(){
    
    if(radius>0){
        return radius*radius*3.14;
    }
    else{
        return -1;
    }  
}

double Circle:: getGirth(){
    return radius *2*3.14;
}
double Circle:: getVolume(){
    return getArea()*height;
}

string  Circle:: getName(){
    return name;
}

void  Circle :: setName(string n){
    if(n.length()<=10 && n[0]=='C'){
        name=n;
    }
}