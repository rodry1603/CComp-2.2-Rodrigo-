#include<iostream>
#include"cola_1.h"

int main(){
cola_1 C;

    for (int i = 1; i < 15; i++) {
        C.push(i);
    }
    C.print();
    for (int i = 1; i < 15; i++) {
        cout << C.pop() << endl;
    }
    C.print();
    for (int i = 1; i < 8; i++) {
        C.push(i);
    }
    C.print();
    for (int i = 1; i < 4; i++) {
        cout << C.pop() << endl;
    }
    C.print();
    for (int i = 1; i < 11; i++) {
        C.push(i);
    }
    C.print();
    for (int i = 1; i < 13; i++) {
        cout << C.pop() << endl;
    }
    C.print();
}