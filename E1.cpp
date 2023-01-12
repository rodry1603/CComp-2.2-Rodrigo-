#include <iostream>
using namespace std;
int main(){
    int out=0;
    for(int x=1; x<1000; ++x){
        if(x%3==0 || x%5==0){
            out+=x;
        }
    }
    cout<< out;

    return 0;
}