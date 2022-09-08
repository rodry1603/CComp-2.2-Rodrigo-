#include <iostream>
#include <string>

using namespace std;

int main(){

    int lado0{0};
    int lado1{1};
    int lado2{2};
    int lado3{3};
    int lado4{4};
    int caras0{0};
    int caras1{6};
    int area0{0};
    int area1{1};
 

    cout << "Face lenght of cube (cm)" << "\t" << "Surface area of cube (cm2)" << "\t" << "Volume of cube(cm3)" << endl;
    cout <<  lado0 << "\t" << caras0 << "\t" << area0 << endl;
    cout << lado1 << "\t" << caras1 << "\t" << area1 << endl;
    cout << lado2 << "\t" << caras1+18 << "\t" << area1+7 << "\t" << endl;
    cout << lado3 << "\t" << caras1+48 << "\t" << area1+26 << "\t" << endl;
    cout << lado4 << "\t" << caras1+90 << "\t" << area1+63 << "\t" << endl;

    return 0;


}