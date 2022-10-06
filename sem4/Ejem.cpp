#include <iostream>
#include 'Point1.h'

using namespace std;

int suma(int a, int b){
    return a+b;
}

void imprimirNum(int a){
    cout<<"El numero es : "<<a<<endl;
}

void imprimirPoint(Point1 p){
    cout<<"("<<p.getX()<<","<<p.getY()<<")"<<endl;
}

void modificarPoint (int _x, int _y, Point1 &p){
    p.setX(_x);
    p.setY(_y)
}

void intercambio(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

void intercambioPoints(Point1 &a, Point1 &b){
    Point1 tmp=a;
    a = b;
    b = tmp;
}

int main(){
    int result = suma(5, 6);
    cout << suma(5, 6) << endl;

    imprimirNum(6);
    Point p1(5,6);

    imprimirPoint(p1);
    modificarPoint(7,8,p1);
    imprimirPoint(p1);

    int a = 20;
    int b = 40;
    intercambio(a, b);
    cout <<a<< endl;
    cout<<b<< endl;

    Point1 p1(4, 5);
    Ponit1 p2(9, 2);

    

    return 0;
}