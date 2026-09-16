#include <iostream>
#include <string>
using namespace std;
int main()
{
    int r_num;
    string name;
    int age;
    string dept;
    cout << "Enter name:" << endl;
    getline(cin, name);
    cout << "Enter department:" << endl;
    getline(cin, dept);
    cout << "Enter age:" << endl;
    cin >> age;
    cout << "Enter roll number:" << endl;
    cin >> r_num;
    cin.ignore();
    cout << "Student Record: " << name << " | Roll Number: " << r_num << " | Age: " << age << " | department: " << dept << endl;

    return 0;
}
