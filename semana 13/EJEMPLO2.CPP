#include <iostream>
using namespace std;

template <typename T,typename U>
U sum(const T a,const U b){
    return a+b;

}

int main(){

    cout << sum<int,float>(1,5) <<endl;
    cout << sum<double,int>(4.5,6.7) <<endl;
 

    return 0;
}