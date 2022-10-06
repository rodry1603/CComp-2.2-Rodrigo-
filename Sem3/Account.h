// Fig. 3.8: Account.h
// Account class with name and balance data members, and a
// constructor and deposit function that each perform validation.

#include<string>

class Account
{
public:
  // Account constructor with two parameters
  Account(std::string accountname, int initialbalance)
    :name{accountname} {// assign accountName to data member name

     // validate that the initialBalance is greater than 0; if not,
     // data member balance keeps its default initial value of 0
    if (initialbalance > 0) {
        
    }
}