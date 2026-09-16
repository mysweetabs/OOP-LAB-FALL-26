#include <iostream>
#include <string>
using namespace std;

class Basic
{
protected:
    string type;
    string registrationNumber;
    double Dailyrate;

public:
    void setType(string t) { type = t; }
    void setRegistrationNumber(string n) { registrationNumber = n; }
    void setRate(double r) { Dailyrate = r; }

    double calcTotal(int days, double rate)
    {
        // double *ptr = &total;    // testing with pointer
        return days * rate;
    }

    void printDetails(int days)
    {
        cout << "\nType: " << type << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Daily Rate: $" << Dailyrate << endl;
        cout << "Total cost: $" << calcTotal(days, Dailyrate) << endl;
    }
};

class Premium : public Basic
{
    double insuranceCharge;
    int mileageLimit;

public:
    void setInsCharge(double i) { insuranceCharge = i; }
    void setMileLimit(int m) { mileageLimit = m; }

    void printDetails(int days)
    {
        cout << "\nType: " << type << endl;
        cout << "Registration Number: " << registrationNumber << endl;
        cout << "Daily Rate: $" << Dailyrate << endl;
        cout << "Total cost: $" << (calcTotal(days, Dailyrate) + insuranceCharge) << endl;
    }
};

int main()
{
    Basic b1, b2;
    Premium p3;
    b1.setRate(5);
    b1.setRegistrationNumber("001");
    b1.setType("Sedan");
    b2.setRate(10);
    b2.setRegistrationNumber("002");
    b2.setType("SUV");
    p3.setInsCharge(50);
    p3.setType("Luxury Car");
    p3.setRate(15);
    p3.setRegistrationNumber("003");
    p3.setMileLimit(1000);
    b1.printDetails(5);
    b2.printDetails(5);
    p3.printDetails(5);

    return 0;
}