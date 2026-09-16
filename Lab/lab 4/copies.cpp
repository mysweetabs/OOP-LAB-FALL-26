#include <iostream>
using namespace std;

class student
{

    string name;
    string id;
    int age;

public:
    // default constructor
    student()
    {
    }

    student(string name, string id, int age) : name(name), id(id), age(age)
    {
    }

    void printDetails()
    {
        cout << name << endl;
        cout << id << endl;
        cout << age << endl;
    }

    void setName(string n)
    {
        name = n;
    }

    string getName()
    {
        return name;
    }
};

int main()
{
    student s1("abde", "0084", 21);
    student s2 = s1;
    s1.printDetails();
    cout << &s1 << endl;
    s2.printDetails();
    cout << &s2 << endl;

    return 0;
}