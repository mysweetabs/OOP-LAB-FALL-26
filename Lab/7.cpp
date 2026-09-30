#include <iostream>
#include <string>
using namespace std;

class Vehicle
{
    int registration_number;

public:
    Vehicle(int r) : registration_number(r) {}
    int getRegistrationNum() const { return registration_number; }
};

class LandVehicle : virtual public Vehicle
{
public:
    LandVehicle(int r) : Vehicle(r) {}
};

class WaterVehicle : virtual public Vehicle
{
public:
    WaterVehicle(int r) : Vehicle(r) {}
};

class AmphibiousVehicle : public LandVehicle, public WaterVehicle
{
public:
    AmphibiousVehicle(int r) : Vehicle(r), LandVehicle(r), WaterVehicle(r) {}
};

int main()
{
    AmphibiousVehicle A(2005);
    cout << A.getRegistrationNum() << endl;
    return 0;
}