#include <iostream>
#include <string>
using namespace std;

class Account
{
protected:
    double balance;

public:
    Account(double b) : balance(b) {}
    void deposit(double add)
    {
        balance += add;
        cout << "Deposited " << add << endl;
    }
};

class SavingsAccount : public Account
{
    double interestRate;

public:
    SavingsAccount(double b, double i) : Account(b), interestRate(i) {}
    void calculateInterest() { cout << "interest: " << balance * interestRate << endl; }
};

int main()
{
    SavingsAccount abde(10000, 0.05);
    abde.deposit(2000);
    abde.calculateInterest();

    return 0;
}