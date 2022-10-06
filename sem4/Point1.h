#ifndef _POINT1_H_
#define _POINT1_H_

class point1{
    
    public:
    Point1(int _x=0, int _y=0) : x(_x), y(_y){}

    void setX(int _x){
        x=_x;
    }
    int getX() const{
        return x;
    }
    void setY(int _y){
        y=_y
    }
    int getY() const{
        return y;
    }

    private:
    int x,y;
};

#endif