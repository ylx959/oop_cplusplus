class Shape{  
    int area;
    int girth;
    //讓子類別可以碰的是函式不是變數成員
    //因為如果將變數設成protected 會產生一個問題, 就是當子類別也設一個相同變數 會蓋過父類別的
    //這樣一來 getArea() 能然是回傳0
    protected:
        void setArea(int a);
        void setGirth(int g);
    public:
        Shape(){
            area=0;
            girth=0;
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
void Shape::setArea(int a)
{
    area=a;
}
void Shape::setGirth(int g){
    girth=g;
}

//Circle
class Circle:public Shape{
    int radius;
    public:
        void setRadius(int r);
}; 

void Circle ::setRadius(int r){
    if(r>=0 && r<=100){
        radius=r;
        setArea(radius*radius*3.14);
        setGirth(radius*2*3.14);
    }
}

//Rectangle
class Retangle:public Shape{
    public:

};