class Circle{
private:

public:
        int radius;
        int height;
        double getArea(){
            return radius*radius*3.14;
        }
        double getGirth(){
            return radius *2*3.14;
        }
        double getVolume(){
            return getArea()*height;
        }
        
        
};