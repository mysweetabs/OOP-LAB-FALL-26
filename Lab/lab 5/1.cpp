#include <iostream>
using namespace std;
class Flight
{

    const int flightNumber;
    static string airlineName;
    static int flights;

public:
    Flight(int fn) : flightNumber(fn) { flights++; }

    ~Flight() { cout << "\nFlight record removed!" << endl; }

    void displayFlightDetails() const
    {
        cout << "\nFlight Number: " << flightNumber << endl;
        cout << "Airline Name: " << airlineName << endl;
    }

    static int getFlights()
    {
        return flights;
    }
};

int Flight::flights = 0;
string Flight::airlineName = "PIA";

int main()
{
    Flight f1(43124);
    Flight f2(25437);
    Flight f3(35422);

    f1.displayFlightDetails();
    f2.displayFlightDetails();
    f3.displayFlightDetails();

    cout << "\nnumber of flights: " << Flight::getFlights() << endl;

    return 0;
}
