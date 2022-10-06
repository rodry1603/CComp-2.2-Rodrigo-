#include <iostream>
#include "Point.h"

using namespace std;

void printArray(const Point array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        array[i].print();
    cout << " ]" << endl;
}

void intercambio(Point &a, Point &b) {
    Point tmp = a;
    a = b;
    b = tmp;
}

/*
Implementar un algoritmo de ordenamiento (burbuja) para ordenar un arreglo de enteros
*/
void bSort(Point array[], int tam) {
    for(int i = 0; i < tam; i++) {
        for(int j = i + 1; j < tam; j++) {
            if(array[i].getX() > array[j].getX())
                intercambio(array[i], array[j]);
        }
    }
}

/*
Implementar insertionsort
*/
void iSort(int array[], int n) {
    int key, j; 
    for (int i = 1; i < n; i++)
    { 
        key = array[i];
        j = i - 1; 
        while (j >= 0 && array[j] > key)
        { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = key; 
    } 
}

void isort_p (Point array[], int n){
    Point key;
    int j;
    for(int i = 1; i<n;i++){
        key = array[i];
        j = i - 1; 
        while (j >= 0 && array[j].getX() > key.getX())
        { 
            array[j + 1] = array[j]; 
            j = j - 1; 
        } 
        array[j + 1] = key; 
    }
}

int main() {
    Point p1;
    Point p2(12,5);
    Point p3(2,15);
    Point p4(10,8);
    Point p5(1,4);

    Point arreglo[] = {p1, p2, p3, p4, p5};    
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    
    printArray(arreglo,  tam);
    bSort(arreglo, tam);
    printArray(arreglo,  tam);
    
    return 0;
}