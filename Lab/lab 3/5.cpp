#include <iostream>
#include <string>
using namespace std;

class Consumer
{
    string name;
    string ID;
    int units;

public:
    Consumer(string s, string i, int n) : name(s), ID(i), units(n) {}

    double calcTotal(int units)
    {
        return (100 * 5) + (units - 100) * (10); // hardcoded rate
    }

    void printDetails()
    {
        cout << "\nName: " << name << endl;
        cout << "Consumer ID: " << ID << endl;
        cout << "Monthly Units used: " << units << endl;
        cout << "Bill: $" << calcTotal(units) << endl;
    }
};

int main()
{
    Consumer abde("Abdullah", "422005", 250);
    abde.printDetails();

    return 0;
}