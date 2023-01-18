#include<iostream>
#include<iomanip>
#include<vector>
#include<stdexcept>
using namespace std;

void outputVector(const vector<int>&);
void inputvector(vector<int>&);

int main(){
    vector<int> integers1(7);
    vector<int> integers2(10);

    cout<<"Size of vector integers1 is: "<<integers1.size()
    <<"\nvector after initialization:";
    outputVector(integers1);

    cout<<"Size of vector integers2 is: "<<integers2.size()
    <<"\nvector after initialization:";
    outputVector(integers2);

    cout<<"\nEnter 17 integers:"<<endl;
    inputvector(integers1);
    inputvector(integers2);

    cout<<"\nEvaluating: integers1 != integers2"<<endl;

    if(integers1!=integers2){
        cout<<"integers1 and integers2 are not equal"<<endl;
    }

    vector<int> integers3{integers1};

    cout<<"\nSize of vector integers3 is:"<<integers3.size()
      << "\nvector after initialization: ";
    outputVector(integers3);

    cout<<"\nAssigning integers2 to integers1:"<<endl;
    integers1=integers2;
    
    cout<<"integers1: ";
    outputVector(integers1);
    cout<<"integers2: ";
    outputVector(integers2);

    cout<< "\nEvaluating: integers1 == integers2" << endl;

    if(integers1 == integers2){
        cout<<"integers1 and integers2 are equal" << endl;
    }

    cout << "\nintegers1[5] is " << integers1[5];

    cout<< "\n\nAssigning 1000 to integers1[5]" << endl;
    integers1[5]=1000;
    cout<<"integers1: ";
    outputVector(integers1);

    try{
        cout<<"\nAttempt to display integers1.at(15)" << endl;
        cout<<integers1.at(15) << endl;
    }
    catch(out_of_range& ex){
        cerr<<"An exception ocurred: "<<ex.what()<<endl;
    }

    cout<< "\nCurrent integers3 size is: " << integers3.size() << endl;
    integers3.push_back(1000); 
    cout << "New integers3 size is: " << integers3.size() << endl;
    cout << "integers3 now contains: ";
    outputVector(integers3);
}

void outputVector(const vector<int>& items){
    for(int item: items){
        cout<< item<<" ";
    }
    cout<<endl;
}

void inputVector(vector<int>& items){
    for(int& item: items){
       cin>>item; 
    }
}