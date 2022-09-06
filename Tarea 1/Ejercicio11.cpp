#include <iostream>
using namespace std;

int main()
{
    float a;
    float b;
    float c;
    float d;
    float e;
    float s;
    cout <<"Ingrese cuantas millas conduce por dia:";
    cin>>a;
    cout<<"Ingrese cuanto paga por galon de gasolina:";
    cin>>b;
    cout<<"Ingrese las millas promedio por galon:";
    cin>>c;
    cout<<"Ingrese cuanto paga por estacionamiento al dia:";
    cin>>d;
    cout<<"Ingrese cuanto paga por peaje:";
    cin>>e;

    s=((a*c)*b)+d+e;

    cout<<"Por conducir al dia usted gasta"<<s<< endl;

    return 0;




}