#include <iostream>
#include <string>
using namespace std;

class Person
{
    string name;

public:
    Person(string n) : name(n) {}
    string getName() const { return name; }
};

class Student : public Person
{
    int roll_num;
    string degree;

public:
    Student(string n, int r, string d) : Person(n), roll_num(r), degree(d) {}
    int getRollNum() const { return roll_num; }
    string getDegree() const { return degree; }
};

class Graduate : public Student
{
    string research_topic;

public:
    Graduate(string n, int r, string d, string re) : Student(n, r, d), research_topic(re) {}
    string getResearchTopic() const { return research_topic; }
    void display() const
    {
        cout << getName() << "\n";
        cout << getRollNum() << "\n";
        cout << getDegree() << "\n";
        cout << getResearchTopic() << "\n";
    }
};

int main()
{
    Graduate g1("Abde", 84, "AI", "Neural Network");
    g1.display();

    return 0;
}