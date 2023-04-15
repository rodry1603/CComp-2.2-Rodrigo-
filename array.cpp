#include <iostream>
using namespace std;

void merge(int A[])
{
    int *p=A;
    int *q=A;
    while(*q%2==0){
        q++;
    }
    int *c=A;
    int size=(q-p)*2;
    int *s= A+(size-1);

    for(;q<=s;q++){
        c=p;
        for(;c<q;c++){
            if(*q<*c){
                int tmp=*c;
                *c=*q;
                *q=tmp;
            }
        }
    }

    for(;p<=s;p++){
        cout<<*p<<" ";
    }
}

int main(){
    int Z[10]={ 4,6,10,22,34,1,3,11,21,23};
    merge(Z);
    return 0;
}
