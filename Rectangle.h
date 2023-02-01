#include"Polygon.h"

class Rectangle:public Polygon{
    public:
    Rectangle(int a, int b):Polygon{a,b}{}
    int area(){
        return width*height;
    }

};