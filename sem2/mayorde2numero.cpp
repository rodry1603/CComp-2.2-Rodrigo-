#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;

    cout << "ingrese un numero";
    cin >> a;
    cout << "ingrese otro numero";
    cin >> b;

    if(a>b)
    {
        cout <<"el mayor es :" << a <<  endl;
    }else{
        cout <<"el mayor es :" << b << endl;
    }

    return 0;

}