#ifndef __DYNAMICTEMPLATE_H__
#define __DYNAMICTEMPLATE_H__

#include <iostream>
#include <string>

template<typename T, int N>
class DynamicTemplate {
    private:
    T *data[N];
    public:

    DynamicTemplate(const T arr[]) {
    data = new int[N];
    for(int i = 0; i < N; i++)
        data[i] = arr[i];
    }

    int getSize() const {
        return N;
    }

    void print() const {
        std::cout << "[ ";
        for(int i = 0; i < N; i++)
            std::cout << data[i] << " ";
        std::cout << "]" << std::endl;
    }

    void push_back(T val){
        T *temp=new T[N+1];
        for(int i=0;i<N;i++){
            temp[i]=data[i];
        }

    delete[] data;
    this->data=temp;
    N++;
    this->data[N-1]=val;
    }

    void insert(int index,T value){
        T *temp=new T[N+1];
        for(int i=0,j=0;i<N;i++,j++){
            if(j==index){
                temp[j]=value;
                i--;
            }else{
                temp[j]=this->data[i];
            }
        }
    N++;
    delete[] data;
    this->data=temp;
    }

    void remove(int index){
        T *temp=new T[N-1];
        for(int i=0,j=0;i<N;i++,j++){
            if(j==index){
            i++;
            }
        temp[j]=this->data[i];
        }
    N--;
    delete[] data;
    this->data=temp;
    }   

    void clear(){
        delete[] data;
        N=0;
        this->data=new T[N];
    }
};

#endif