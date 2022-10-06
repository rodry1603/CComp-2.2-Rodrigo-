#include <iostream>
using namespace std;

int main()
{
    int result{0};
    for(unsigned int counter{1}; counter<1000; ++counter){
        int x{3};
        int y{5};
        if(counter%x==0 || counter%y==0){
            result+=counter;
        }
    }

    cout<<"El resultado es:"<< result;

    return 0;
    
}