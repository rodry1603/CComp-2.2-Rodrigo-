#include <iostream>
using namespace std;

int main()
{
    int a;
    int w;
    int x;
    int y;
    int z;
    int m;
    int n;
    cout<<"Ingrese su edad";
    cin>>a;
    w=220-a;
    x=208-(0,7*a);
    y=207-(0,7*a);
    z=211-(0,64*a);

    if(w>x && w>y && w>z)
    {
        m=w;
    }
    else if(w<x && w<y && w<z)
    {
        n=w;
    }
    else if(x>w && x>y && x>z)
    {
        m=x;
    }
    else if(x<w && x<y && x<z)
    {
        n=x;
    }
    else if(y>w && y>x && y>z)
    {
        m=y;
    }
    else if(y<w && y<x && y<z)
    {
        n=y;
    }
    else if(z>w && z>x && z>y)
    {
        m=z;
    }
    else if(z<w && z<x && z<y)
    {
        n=z;
    }
    cout<<"Su rango esta entre:"<<n<<"y"<<m<< endl;

    return 0;
    


}