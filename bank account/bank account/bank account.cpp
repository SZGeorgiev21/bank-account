
#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string clientName;
    string accountNumber;
    double balance;

public:
    BankAccount(string name, string accNumber, double initialBalance)
    {
        clientName = name;
        accountNumber = accNumber;
        balance = initialBalance;
    }

    void displayAccount()
    {
        cout << "Client Name: " << clientName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount)
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        }
        else 
        {
            cout << "Invalid deposit amount." << endl;
        }
    }

    void withdraw(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
        else 
        {
            cout << "Invalid withdrawal amount or insufficient funds." << endl;
        }
    }
};

int main() 
{
    BankAccount myAccount("Ivan Ivanov", "123456789012345", 1000.0);

    cout << "Bank Account Details:" << endl;
    myAccount.displayAccount();

    myAccount.deposit(500.0);

    myAccount.withdraw(200.0);

    cout << "Updated Bank Account Details:" << endl;
    myAccount.displayAccount();

    return 0;
}