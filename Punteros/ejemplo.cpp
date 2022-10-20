#include<iostream>
using namespace std;

int main()
{
    int a{7};
    int *aPtr = &a;
    cout <<"La direccion de la variable a es "<< &a
           << "\nEl Valor de aPtr es " << aPtr;
    cout <<"\nEl valor de a es "<< a
           <<"\nEl valor de *aPtr es"<< *aPtr;
}