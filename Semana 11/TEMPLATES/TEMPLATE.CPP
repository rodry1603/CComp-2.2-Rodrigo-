#include <iostream>
using namespace std;

int main(){

    template <typename T, typename U>
    U sum(const T a, const U b){
        return a+b;

    }

    int main(){
        cout<< sum<int, float>(4, 5.9) << endl;
        cout << sum<float, int>(4.6, 5.8) << endl;
        cout << sum<string>("feliz", "cimpleaños") << endl; 
    }
}