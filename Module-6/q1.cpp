/*
Define a class to represent a bank account. Include the following members: 
Data Member: -
a) Name of the depositor -
b) Account Number
c) Type of Account -
d) Balance amount in the account -
e) Member Functions -
f) To assign values -
g) To deposited an amount -
h) To withdraw an amount after checking balance - 
i) To display name and balance
*/

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignValues(string name, int accNo, string type, double initialBalance)
    {
        depositorName = name;
        accountNumber = accNo;
        accountType = type;
        balance = initialBalance;
    }

    void depositAmount(double amount)
    {
        if(amount > 0)
        {
            balance += amount;
            cout<<"Amount Deposited:- "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid deposit amount!"<<endl;
        }
    }

    void withdrawAmount(double amount)
    {
        if(amount > balance)
        {
            cout<<"Insufficient balance! Cannot withdraw"<<amount<<endl;
        }
        else if(amount > 0)
        {
            balance -= amount;
            cout<<"Amount Withdrawn:- "<<amount<<endl;
        }
        else
        {
            cout<<"Invalid withdraw amount!"<<endl;
        }
    }

    void displayDetails() const
    {
        cout<<"Depositor Name:- "<<depositorName<<endl;
        cout<<"Balance:- "<<balance<<endl;
    }
};

int main() 
{
    BankAccount account;

    account.assignValues("John Doe", 123456789, "Savings", 1000.0);

    account.displayDetails();

    account.depositAmount(500.0);

    account.displayDetails();

    account.withdrawAmount(300.0);

    account.displayDetails();
}
