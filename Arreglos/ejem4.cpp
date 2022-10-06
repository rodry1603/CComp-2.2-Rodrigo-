#include <iostream>

using namespace std;

void printArray(const int array[], int tam) {
    cout << "[ ";
    for(int i = 0; i < tam; i++)
        cout << array[i] << " ";
    cout << "]" << endl;
}

void intercambio(int &a, int &b) {
    int tmp = a;
    a = b;
    b = tmp;
}

/*
Implementar un algoritmo de ordenamiento (burbuja) para ordenar un arreglo de enteros
*/
void bsort(int array[], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(array[i] > array[j])
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

int main() {
    int arreglo[] = {5, 7, 10, 3, 9};    

    // sizeof -> retorna el tamaño en bytes del tipo de dato
    int tam = sizeof(arreglo) / sizeof(arreglo[0]);
    
    printArray(arreglo,  tam);
    iSort(arreglo, tam);
    printArray(arreglo,  tam);
    
    return 0;
}