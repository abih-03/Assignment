/*
Assume that a bank maintains two kinds of accounts for customer, one called 
as saving account and other as current accounts provides Simple interest and 
withdraw facilities but no Cheque book facility. 

a) The current account provides Cheque book facility but no interest. 
b) Current account holders should maintain a minimum balance and if the 
balance falls below this level a service charges is imposed
*/

#include <iostream>
using namespace std;

class Account 
{
    protected:
    double balance;
    public:
        Account(double initial_balance) : balance(initial_balance) {}
        virtual void deposit(double amount)
        {
        balance += amount;
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
    virtual void display() const
    {
        cout << "Balance: " << balance << endl;
    }
};

class SavingsAccount : public Account
{
    private:
    double interest_rate;
    public:
        SavingsAccount(double initial_balance, double rate) : Account(initial_balance), interest_rate(rate) {}
        void addInterest()
        {
        balance += (balance * interest_rate);
        }
    void display() const override
    {
        cout << "Savings Account Balance: " << balance << endl;
    }
};

class CurrentAccount : public Account
{
    private:
    double minimum_balance;
    double service_charge;
    public:
        CurrentAccount(double initial_balance, double min_balance, double charge) 
        : Account(initial_balance), minimum_balance(min_balance), service_charge(charge) {}
    void withdraw(double amount) override 
    {
        if (amount <= balance)
        {
            balance -= amount;
            if (balance < minimum_balance)
            {
            balance -= service_charge;
            cout << "Service charge imposed due to low balance!" << endl;
            }
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }
    void display() const override
    {
        cout << "Current Account Balance: " << balance << endl;
    }
};

int main()
{
    SavingsAccount savings(1000, 0.05); 
    CurrentAccount current(2000, 500, 50); 

    savings.deposit(500);
    savings.addInterest();
    savings.withdraw(200);
    savings.display();

    current.deposit(1000);
    current.withdraw(2500);
    current.display();
}
