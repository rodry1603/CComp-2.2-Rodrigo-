#include <iostream>
#include "Point1.h"
 using namespace std;

 void imprimirPoints(const Point1 arr[], const int tam){
    for(int i=0; i<tam; i++){
        arr[i].print(i);
    }
 }

int main(){
    Point p1;
    Point p2{4, 3};
    Point p3{4, 0};

    Point arr[] = {p1, p2, p3};

    imprimirPoints(arr, 3);

    return 0;

}



