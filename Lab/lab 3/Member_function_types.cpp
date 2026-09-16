#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
    string name;
    int year;
    string model;

public:
    void setName(string str);
    void setYear(int n);
    void setModel(string Model);
    string getName();
    int getYear();
    string getModel();
};

void Car::setName(string str)
{
    name = str;
}
string Car::getName()
{
    return name;
}
void Car::setYear(int n)
{
    year = n;
}
int Car::getYear()
{
    return year;
}
void Car::setModel(string m)
{
    model = m;
}
string Car::getModel()
{
    return model;
}

int main()
{
    Car c1;
    int year;
    string name, model;
    cout << "Enter name of car: " << endl;
    getline(cin, name);
    cout << "Enter model of car: " << endl;
    getline(cin, model);
    cout << "Enter year of car: " << endl;
    cin >> year;
    // cin.ignore(); In case of input buffer for strings
    c1.setName(name);
    c1.setYear(year);
    c1.setModel(model);
    cout << "\n";
    cout << c1.getName() << endl;
    cout << c1.getModel() << endl;
    cout << c1.getYear() << endl;

    return 0;
}