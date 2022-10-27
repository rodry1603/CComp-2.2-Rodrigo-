#include <iostream>
#include "Point.h"

using namespace std;

int main() {
    Point p1{1,2};

    if(true) {
        Point p2{5,6};
        p2.print();
    }

    p1.print();

    Point *ptr = new Point(8,9);

    if(true) {
        Point p2{5,6};
        p2.print();
    }

    p1.print();
    ptr->print();  

    delete ptr;  

    return 0;
}