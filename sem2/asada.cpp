#include <iostream>
using namespace std;

int main(){
    int rad, diametro = 0,area = 0, circunferencia = 0;
    float pi ; pi = 3,14159;
    cout<<"digite el radio del circulo:" cin>> rad;

    area = pi*(rad*rad) ;
    diametro = rad/2;
    circunferencia = pi*diametro;

    cout<<"el area del circulo es:" << area << endl;
    cout<<"el diametro del circulo es:" << diametro << endl;
    cout<<"la circunferencia del circulo es:" << circunferencia << endl;
    return 0;
    }