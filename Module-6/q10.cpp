/*
Create a class account that stores customer name, account number and 
type of account. From this derive classes curr_acc and sav_acct to make 
them more specific to their requirements Include necessary member 
functions in order to achieve the following tasks 
a) Accepts deposit from a customer and update balance. 
b) Display the balance. 
c) Compute and deposit interest. 
d) Permit withdraws and updates the balance. 
e) Check for the minimum balance, impose penalty, necessary and 
update the balance. 
*/

#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    string customer_name;
    int account_number;
    string account_type;
    double balance;
public:
    Account(string name, int acc_no, string acc_type, double bal)
        : customer_name(name), account_number(acc_no), account_type(acc_type), balance(bal) {}

    virtual void deposit(double amount)
    {
        balance += amount;
    }

    virtual void display() const
    {
        cout << "Customer Name: " << customer_name << endl;
        cout << "Account Number: " << account_number << endl;
        cout << "Account Type: " << account_type << endl;
        cout << "Balance: " << balance << endl;
    }

    virtual void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
};

class SavAcct : public Account
{
private:
    double interest_rate;
public:
    SavAcct(string name, int acc_no, double bal, double rate)
        : Account(name, acc_no, "Savings", bal), interest_rate(rate) {}

    void computeInterest()
    {
        balance += (balance * interest_rate);
    }

    void display() const override
    {
        cout << "Savings Account Details:" << endl;
        Account::display();
    }
};

class CurrAcc : public Account
{
private:
    double minimum_balance;
    double penalty;
public:
    CurrAcc(string name, int acc_no, double bal, double min_bal, double pen)
        : Account(name, acc_no, "Current", bal), minimum_balance(min_bal), penalty(pen) {}

    void withdraw(double amount) override
    {
        if (amount <= balance)
        {
            balance -= amount;
            if (balance < minimum_balance)
            {
                balance -= penalty;
                cout << "Penalty imposed due to low balance!" << endl;
            }
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const override
    {
        cout << "Current Account Details:" << endl;
        Account::display();
    }
};

int main()
{
    SavAcct savings("John Doe", 12345, 1000.0, 0.05); // Initial balance: 1000, Interest rate: 5%
    CurrAcc current("Jane Doe", 67890, 2000.0, 500.0, 50.0); // Initial balance: 2000, Minimum balance: 500, Penalty: 50

    savings.deposit(500);
    savings.computeInterest();
    savings.withdraw(200);
    savings.display();

    current.deposit(1000);
    current.withdraw(2500);
    current.display();
}
