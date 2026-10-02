//Circle
class Circle{
    int radius;
    public:
        void setRadius(int r);
        int getRadius();
        
        Circle(int radius=0){
            this->radius=radius;
        }
}; 

int Circle ::getRadius(){
    return radius;
}

void Circle ::setRadius(int r){
    if(r>=0 && r<=100){
        radius=r;
    }
}

//Rectangle
class Rectangle{
    int width;
    int length;
    public:
    Rectangle(int a=0,int b=0){
        length=a;
        width=b;
    }
    void setLength(int l);
    void setWidth(int w);
    int getLength();
    int getWidth();
};

void Rectangle:: setLength(int l){
    length=l;
}
void Rectangle::setWidth(int w){
    width=w;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getWidth(){
    return width;
}