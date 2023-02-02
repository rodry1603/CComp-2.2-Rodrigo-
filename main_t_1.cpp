#include"Point.h"
#include"DynamicTemplate.h"

int main(){
    Point p1{2,1};
    Point p2{5,4};
    Point p3{8,6};
    Point p4{9,7};
    Point arr[]={p1,p2,p3};
    int arr1[]={1,2,3};
  

    DynamicTemplate<Point,3> a1(arr);
    DynamicTemplate<int,3> a2(arr1);

    a1.push_back(p4);
    a1.print();
    a2.push_back(8);
    a2.print();
}