#include <iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int d;
    int e;

    cout<<"Ingrese un numero:";
    cin>>a;
    cout <<"Ingrese un segundo numero:";
    cin>>b;
    cout<<"Ingrese un tercer numero:";
    cin>>c;
    cout<<"Ingrese un cuarto numero:";
    cin>>d;
    cout<<"Ingrese un quinto numero:";
    cin>>e;

    if(a>b && a>c && a>d && a>e)
    {
        cout<<"El mayor es:"<<a<< endl;
    }
    else if(b>a && b>c && b>d && b>e)
    {
        cout<<"El mayor es:"<<b<< endl;
    }
    else if(c>a && c>b && c>d && c>e)
    {
        cout<<"El mayor:"<<c<< endl;
    }
    else if(d>a && d>b && d>c && d>e)
    {
        cout<<"El mayor:"<<d<< endl;
    }
    else if(e>a && e>b && e>c && e>d)
    {
        cout<<"El mayor:"<<e<< endl;
    }

    return 0;



}