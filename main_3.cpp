#include <iostream>
#include "DynamicIntArray.h"

using namespace std;

int main() {
    DynamicIntArray a; 
    cout << a.getSize() << endl;
    a.print();
        
    /* Paul */
    int arr[]={1,2,3};
    DynamicIntArray uwu(arr,3);
    cout << uwu.getSize() << endl;
    uwu.print();

    /* Rodrigo */
    DynamicIntArray awa(uwu);
    cout << awa.getSize() << endl;
    awa.print();

    uwu.push_back(5);
    uwu.print();

    return 0;
}
