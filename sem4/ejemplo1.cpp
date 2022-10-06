#include <iostream>
#include "Point.h"

using namespace std;
int suma(int a, int b){
    return a+b;
}

void imprimir(int a){
    cout<<"El entero es :"<<a<<endl;
}

void imprimirPoint(Point p){
    cout<<"("<< p.getX()<<", "<<p.getY()<<")"<<endl;
}

void modificarPoint(int _x,int _y,Point &p){
    p.setX(_x);
    p.setY(_y);

}
 

void intercambio(int p, int q){
    int tmp = p;
    p=q;
    q=tmp;
}




int main(){
    int a=10;
    int b=20;
    intercambio(a,b);
    cout<<a<<endl;
    cout<<b<<endl;
    int result = suma(5,6);
    cout << suma(5,6) << endl;
    imprimir(5);

    Point p1(5, 5);
    imprimirPoint(p1);
    modificarPoint(9,9,p1);
    imprimirPoint(p1);

    return 0;
}