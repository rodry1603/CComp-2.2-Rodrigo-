#include <iostream>
using namespace std;

void bubble(int arr[], int tam){
    int i{0};
    int j{0};
    int temp;
    for(i;i<=tam-2;i++){
        for(j=i+1;j<=tam-1;j++){
            int temp;
            if(arr[i] > arr[j]){
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;


            }
        }
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[ ]={6,4,5,3,1,2,7};
    bubble(arr,7);

    return 0;
}