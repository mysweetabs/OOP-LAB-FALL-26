#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {};
    string getName() const { return name; }
    int getAge() const { return age; }
};

class Student : virtual public Person
{
    int enrollment_year;

public:
    Student(string n, int a, int e) : Person(n, a), enrollment_year(e) {};
    int getEnrollmentYear() const { return enrollment_year; }
};

class Teacher : virtual public Person
{
    string subject;

public:
    Teacher(string n, int a, string s) : Person(n, a), subject(s) {};
    string getSubject() const { return subject; }
};

class TA : public Student, public Teacher
{
public:
    TA(string n, int a, int e, string s) : Person(n, a), Student(n, a, e), Teacher(n, a, s) {};
    void print()
    {
        cout << getName() << endl;
        cout << getAge() << endl;
        cout << getEnrollmentYear() << endl;
        cout << getSubject() << endl;
    }
};

int main()
{
    TA abde("abde", 21, 2025, "Maths");
    abde.print();
    return 0;
}