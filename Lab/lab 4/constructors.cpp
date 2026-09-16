#include <iostream>
using namespace std;

class student
{

    string name;
    string id;
    int age;

public:
    // static int count;
    inline static int count = 0;

    // intializor list constructor
    student(string name, string id, int age) : name(name), id(id), age(age)
    {
        count++;
        cout << "initializor list constructor called!" << endl;
    }

    // default constructor
    student() : student("0", "1", 2)
    {
        cout << "default constructor called!" << endl;
    }

    // parameterized constructor
    student(string name, int age, string id) : student("0", "1", 2)
    {
        this->name = name;
        this->id = id;
        this->age = age;
        cout << "parameterized constructor called!" << endl;
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
// int student::count = 0;

int main()
{
    student s1("abde", "0084", 21);
    student s2("abde", 21, "0084");
    student s3;
    // student s1; // default constructor cannot be used
    // since a user defined constructor has already been made
    // s1.printDetails();
    cout << "\n"
         << s1.count << endl;

    return 0;
}