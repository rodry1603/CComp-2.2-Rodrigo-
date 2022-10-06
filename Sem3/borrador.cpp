    #include <iostream>
#include "Account.h"

using namespace std;

int main() {
    Account account1{"Jane Green", 50};
    Account account2{"John Blue", -7};

    // renato
    cout << "account1: " << account1.getName() << "balance is $"
        << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $"
        << account2.getBalance();
    // rodry
    cout<<"\n\nEnter deposit amount for account1: ";
    int depositAmount;
    cin>>depositAmount;
    cout<< "adding"<<depositAmount<<"to account balance";
    account1.deposit(depositAmount);

    // dagner
    cout << "\n\naccount: " << account1.getName() << "balance is $"
        << account1.getBalance();
    cout << "\naccount2: " << account2.getName() << "balance is $"
        << account2.getBalance();

    // Aaron
    cout << "\n\nEnter deposit amount for account2: ";
    cin >> depositAmount;
    cout << "adding" << depositAmount << "to account2 balance ";
    account2.deposit(depositAmount);


    // Diego    
    cout << "\n\naccount1: "<< account1.getName()<< " balance is $"
        << account1.getBalance();
    cout << "\naccount2: "<< account2.getName()<< " balance is $"
        << account2.getBalance()<<endl;
    return 0;
    
}