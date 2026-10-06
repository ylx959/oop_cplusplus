//Circle
class Circle{
    int radius;
    public:
        void setRadius(int radius);
        int getRadius();
        
        Circle(int radius){//constructor
            this->radius=0;
            setRadius(radius);
        }
}; 

int Circle ::getRadius(){
    return radius;
}

void Circle ::setRadius(int radius){
    if(radius>=0 && radius<=100){
        this->radius=radius;
    }
}

//Rectangle
class Rectangle{
    int width;
    int length;
    public:
    Rectangle(int width,int length){
        this->width=width;
        this->length=length;
        setWidth(width);
        setLength(length);
    }
    void setLength(int length);
    void setWidth(int width);
    int getLength();
    int getWidth();
};

void Rectangle:: setLength(int length){
    this->length=length;
}
void Rectangle::setWidth(int width){
    this->width=width;
}
int Rectangle::getLength(){
    return length;
}
int Rectangle::getWidth(){
    return width;
}