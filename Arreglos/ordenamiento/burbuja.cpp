#include <iostram>
#include 'Point1.h'
using namespace std;

void ordenarburbuja(int arreglo[], const int tam){
    for(int i=0, i < tam, i++){
        for(int j=0, j<tam-1,j++){
        if(arreglo[i]<arreglo[i+1]){
            int tmp = arreglo[i];
            arreglo[i] = arreglo[i+1];
            arreglo[i+1]=tmp;
        }
        }
    }
}

void intercambiarValores(int &int1, int &int2){
    int tmp = int1;
    int1 = int2;
    int2 = tmp
}

void ordenarInsercion(int arreglo[], const int tam){
    for(int i=0, i < tam, i++){
        for(int j=2, i)
    }
}

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

int main(){
    int arreglo[]={5,7,3,10,9}
    //sizeof = indica el tamaño en bytes

    int tam = sizeof(arreglo)

}