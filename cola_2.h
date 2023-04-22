#include<iostream>
using namespace std;

class cola_2{
    private:
    int A[10];
    int *head=A;
    int *tail=A;
    int *end=A+10;
    public:
    void push(int num);
    void pop();
    void print();
};
#pragma once

void cola_2::push(int num){
    if(head <= tail && tail<=end){
        tail++;
        *head=num;
        head++;
        if(tail==end){
             tail=A;
            *tail=*A;
        }
    }
}

void cola_2::pop(){
    if(tail<=head){
        int *tmp=tail;
        *tmp=*tail;
        tail++;
        for(int *i=A;i<=head;i++,tail++){
            int* tmp2=A;
            *tmp2=*tail;
            tmp2++;
        }
    }
}

void cola_2::print(){
    for(int *i=A; i<end; i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}

#pragma once