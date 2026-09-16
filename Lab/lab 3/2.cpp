#include <iostream>
#include <string>
using namespace std;

class EmployeeData
{
    double salary;

public:
    string name;
    string title;

    EmployeeData(string n, string t, double sal) : name(n), title(t), salary(sal) {}

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void printDetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Job Title: " << title << endl;
        cout << "Salary: $" << getSalary() << endl;
    }
};

int main()
{
    EmployeeData e1("Abdullah Ahmad", "CEO", 10500); // using contructor 
    // e1.name = "Abdullah Ahmad";                      
    // e1.title = "CEO";                             // using setter & getter
    // e1.setSalary(10500);
    e1.printDetails();

    return 0;
}