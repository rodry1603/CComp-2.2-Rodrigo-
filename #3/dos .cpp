#include <iostream>
using namespace std;

int prac(int n) {
    if (n==1){
        return 1;
    } else{
        return n* prac (n-1);
    }
}

int main (){
    cout << factorial(5) << endl;
    return 0;
}

    