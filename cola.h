#include<iostream>
using namespace std;

class cola{
    private:
    int A[10];
    int *head=A;
    int *tail=A+9;
    int *top=nullptr;
    public:
    void push(int num);
    int pop();
    void print();
};
#pragma once

void cola::push(int num){
    if(!top){
        top=head;
        *head=num;
    }else{
        if(top<tail){
            top++;
            *top=num;
        }
        else{
            cout<<"Cola llena"<< endl;
        }
    }
}

int cola::pop(){
    if(!top){
        cout<<"Cola vacia"<<endl;
    }else{
        if(top>=head){
            int tmp = *head;
            for(int* i=head+1;i<=top; i++){
                int* tmp2=i-1;
                *tmp2=*i;
            }
            top--;
            return tmp;
        }
    }
}

void cola::print(){
    for(int *i=head; i<=top; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}
#pragma once