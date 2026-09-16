#include <iostream>
using namespace std;

class Car
{
    int id;
    string modelName;
    double rentPerDay;

public:
    Car(int i, string m, double r) : id(i), modelName(m), rentPerDay(r) {}

    void totalCost(int days)
    {
        cout << modelName << " rent is " << (rentPerDay * days) << endl;
    }

    void retire()
    {
        cout << modelName << " has successfully been retired from the fleet" << endl;
    }
};

int main()
{
    Car honda(001, "civic", 15);
    honda.totalCost(5);
    honda.retire();

    return 0;
}