#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    float c;

    cout << "ingrese un numero :";
    cin >> a;
    cout << "ingrese un segundo numero :";
    cin >> b;
    cout << "ingrese un tercer numero :";
    cin >> c;

    if((a>b) && (a>c)) 
    {
        cout <<"el mayor es :" << a <<  endl;
    }else if((b>a) && (b>c)){
        cout <<"el mayor es :" << b << endl;
    }else{
        cout <<"el mayor es :" << c << endl;
    }
    return 0;

}