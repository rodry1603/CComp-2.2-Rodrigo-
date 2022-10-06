#ifndef _POINT1_H_
#define _POINT1_H_

class point1{
    
    public:
    Point1(int_x=0, int_y=0) : x(_x), y(_y){}

    void setX(int_x){
        x=_x;
    }
    int getX() const{
        return x;
    }
    void setY(int_y){
        y=_y
    }
    int getY() const{
        return y;
    }

    void print() const{
        std::cout<<"("<<x<<","<<y<<")"<<std::endl;
    }

    private:
    int x,y;
};

#endif