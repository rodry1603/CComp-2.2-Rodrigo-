#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    float n;
    cout<<"Ingrese su peso:";
    cin>>a;
    cout<<"Ingrese su altura:";
    cin>>b;

    n=a/(b*b);
    cout<<"Su masa corporal es de:"<<n<< endl;
    cout<<"Valores BMI\nBajo peso: menos de 18.5\nNormal:entre 18.5 y 24.9\nSobrepeso: Entre 25 y 29.9\nObesidad:30 a mas"<< endl;
    
    return 0;
}