class Circle{
    public:
        int radius;
        int height;
        double girth;
        double area;
        double volume;
        double getGirth(){
            return radius *2*3.14;
        }
        int compare(Circle c){
            
            if(radius>c.radius){
                return 1;
            }
            else if(radius<c.radius){
                return -1;
            }
            else{
                return 0;
            }
        }
        Circle copy(){
            Circle c;
            c.radius=radius;
            return c;
        }
        
};