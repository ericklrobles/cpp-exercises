// Create a program that models a simple banking system with classes like Account and Bank. Implement features such as depositing, withdrawing, and checking balances.
#include <iostream>
using namespace std;


class Account{
    public:
          int accountNum;
          string accHolderName;
          double balance;
          void deposit(double amount);
          void withdraw(double wamount);
          void currentBalance();
};
// all 3 methods implemented below class & giving the methods a purpose to use
void Account::deposit(double amount){
    balance += amount;
    cout << "Hello " << accHolderName <<" You have deposited " << amount << "to " << accountNum << endl;
}
void Account::withdraw(double wamount){
    if (wamount > balance){
        cout << "Insufficient funds to withdraw the given amount" << endl;

        }else{
            balance -= wamount;
            cout << "Withdrawn " << wamount << endl;
        }
    }
void Account::currentBalance(){
    cout << "Balance: " << balance << endl;
}
   

int main()
{
    Account myAccount;
    myAccount.accountNum = 12345;
    myAccount.accHolderName = "Erick";
    myAccount.balance = 750.0;
    // adding values to the declared variables from the class
    
    myAccount.deposit(1000.0);
    myAccount.withdraw(500.0);
    myAccount.currentBalance();
    // deposit method implemented

    return 0;
}