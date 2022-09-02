/*implemente un programa que solicite un numero entero
e imprima si representa un año biciesto
*/
#include <iostream>

using namespace std;
int main()
{
    int a;
    cout << "ingrese un numero";
    cin >>a;

    if(a%4==0 && a%100!=100)
    {
        cout << "la fecha es bisiesta" << endl;

    }else if(a%400 ==0){
        cout << "la fecha es bisiesta"<< endl;
    }

    return 0;
}



