// Create a program that models a simple banking system with classes like Account and Bank. Implement features such as depositing, withdrawing, and checking balances.
#include <iostream>
using namespace std;

class Account{
    public:
          int accountNum;
          string accHolderName;
          double balance;
          void deposit(double amount);
};
void Account::deposit(double amount){
    balance += amount;
    cout << "You have deposited " << amount << "into " << accountNum << endl;
}

int main()
{
    Account myAccount;
    myAccount.accountNum = 0123456;
    myAccount.accHolderName = "Erick";
    myAccount.balance = 750.0;
    
    myAccount.deposit(1000);
    // deposit method implemented







    return 0;
}