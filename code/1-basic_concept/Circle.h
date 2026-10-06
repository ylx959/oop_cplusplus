class Circle{
private:
    double girth;
    double area;
    double volume;

public:
        int radius;
        int height;
        double getArea(){
            return radius*radius*3.14;
        }
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
        int compare_ptr(Circle*pc){
            
            if(radius>pc->radius){
                return 1;
            }
            else if(radius<pc->radius){
                return -1;
            }
            else{
                return 0;
            }
        }
        int compare3(Circle &rc){
            if(radius>rc.radius){
                return 1;
            }
            else if(radius<rc.radius){
                return -1;
            }
            else{
                return 0;
            }
        }
        int compare4(Circle *&rpc){
            if(radius>rpc->radius){
                return 1;
            }
            else if(radius<rpc->radius){
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
        void copy2(Circle *c){
            c->radius=radius;
        }
        Circle*copy3(Circle *pc){
            pc->radius=radius;
            return pc;
        }
        Circle &copy4(Circle &c){
            c.radius=radius;
            return c;
        }
        Circle *&copy5(Circle *&c){
            c->radius=radius;
            return c;
        }
        
        
};