#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    string brand;

public:
    Vehicle(string b) : brand(b) {}
    string getBrand() const { return brand; }
    
};

class Car : public Vehicle
{
    int doors;
    
    public:
    Car(string b, int d) : Vehicle(b), doors(d) {}
    int getDoors() const { return doors; }
};

class SportsCar : public Car
{
    int topSpeed;
    
    public:
    SportsCar(string b, int d, int s) : Car(b, d), topSpeed(s) {}
    int getTopSpeed() const { return topSpeed; }
};

int main()
{
    SportsCar mercedes("Mercedes", 4, 300);
    cout << mercedes.getBrand() << endl;
    cout << mercedes.getDoors() << endl;
    cout << mercedes.getTopSpeed() << endl;
    return 0;
}
