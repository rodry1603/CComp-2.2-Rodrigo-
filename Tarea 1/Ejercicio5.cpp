#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    cout<<"Ingrese un numero:";
    cin>>a;
    cout<<"Ingrese un numero:";
    cin>>b;
     if(a%2==1)
     {
        cout<<"El primer numero es impar" << endl;
     }else{
        cout<<"El primer numero no es impar"<< endl;
     }
     if(b%2==1)
     {
        cout<<"El segundo numero es impar"<< endl;
     }else{
        cout<<"El segundo numero no es impar"<< endl;
     }

     if((a+b)%2==1)
     {
        cout<<"La suma de los dos numeros es impar"<< endl;
     }else{
        cout<<"La suma de los dos numeros no es impar"<< endl;
     }

     return 0;

}