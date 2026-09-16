#include <iostream>
using namespace std;
class Reservation
{

    const string roomNumber;
    static string hotelName;
    static int Reservations;
    string guestName;

public:
    Reservation(string rn, string gn) : roomNumber(rn), guestName(gn) { Reservations++; }

    ~Reservation() { cout << "\nReservation cancelled!" << endl; }

    void setGuestName(string g) { guestName = g; }

    string getGuestName() const { return guestName; }

    static int getReservations() { return Reservations; }

    void displayReservations() const
    {
        cout << "\nguest name: " << guestName << endl;
        cout << "room Number: " << roomNumber << endl;
        cout << "hotel Name: " << hotelName << endl;
    }
};

int Reservation::Reservations = 0;
string Reservation::hotelName = "Marriot";

int main()
{
    Reservation r1("100", "abde");
    Reservation r2("101", "ham");
    Reservation r3("102", "feebi");

    r1.displayReservations();
    r2.displayReservations();
    r3.displayReservations();

    cout << "\nnumber of reservations: " << Reservation::getReservations() << endl;

    return 0;
}
