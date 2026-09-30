class Shape{
    int area;
    int girth;
    public:
        Shape(){
            area=10;
            girth=10;
        }
        int getArea();
        int getGirth();
};

int Shape::getArea(){
    return area;
}

int Shape:: getGirth(){
    return girth;
}

class Circle:public Shape{
    public:
        
}; //next time 8