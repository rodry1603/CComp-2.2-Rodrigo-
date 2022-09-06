#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Ingrese un numero";
    cin>>a;
    cout<<"Ingrese un segundo numero";
    cin>>b;
    cout<<"Ingrese un tercer numero";
    cin>>c;

    if(a*b==c)
    {
        cout<<"Los dos primeros numeros son factores del tercero"<< endl;

    }else{
        cout<<"Los numeros ingresados no son factores"<< endl;
    }

    return 0;


}