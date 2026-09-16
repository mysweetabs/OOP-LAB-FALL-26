#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    double marks;
    void input()
    {
        cout << "Enter student name: " << endl;
        getline(cin, name);
        cout << "Enter student marks: " << endl;
        cin >> marks;
        cin.ignore();
    }
    void display()
    {
        cout << "\nName: " << name << endl;
        cout << "Marks: " << marks << endl;
        if (marks > 50)
            cout << "Passed" << endl;
        else
            cout << "Failed" << endl;
    }
};

int main()
{
    student s1, s2;
    s1.input();
    s2.input();
    s1.display();
    s2.display();

    return 0;
}