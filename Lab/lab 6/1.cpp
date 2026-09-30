#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}
    string getName() const { return name; }
    double getSalary() const { return salary; }
};

class Manager : public Employee
{
    int teamSize;

public:
    Manager(string n, double s, int t) : Employee(n, s), teamSize(t) {}
    void printDetails() const
    {
        cout << getName() << "\n";
        cout << getSalary() << "\n";
        cout << teamSize << "\n";
    }
};

int main()
{
    Manager m1("abde", 1500, 5);
    m1.printDetails();

    return 0;
}