#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point *array, int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++, array++)
        array->print();
    cout << " ]" << endl;
}

int main() {
    Point p1;
    Point p2(12,5);
    Point p3(2,15);
    Point p4(10,8);
    Point p5(1,4);

    Point *arreglo = new Point[5];    
    arreglo[0] = p1;
    arreglo[1] = p2;
    arreglo[2] = p3;
    arreglo[3] = p4;
    arreglo[4] = p5;

    printArray(arreglo,  5);

    delete[] arreglo;
    return 0;
}