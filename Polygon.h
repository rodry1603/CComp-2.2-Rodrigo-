#include<iostream>
#include<string>
using namespace std;

class Polygon{
    protected:
    int width,height;
    public:
    Polygon(int a, int b):width{a},height{b}{}
    virtual int area() = 0;
    void printarea(){
        cout<<this->area()<<endl;
    }
    int getWidth(){return width;}
    int getHeight(){return height;}
    void print();
};