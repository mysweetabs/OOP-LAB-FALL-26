#include <iostream>
#include <string>
using namespace std;

class booking
{
    int room;
    string type;
    double* bill;

public:
    booking(int r, string t, double b)
    {
        room = r;
        type = t;

        bill = new double;
        *bill = b;
    }

    booking(const booking& b)
    {
        room = b.room;
        type = b.type;

        bill = new double;
        *bill = *b.bill;
    }

    void set_bill(double b)
    {
        *bill = b;
    }

    void show()
    {
        cout << "room: " << room << endl;
        cout << "type: " << type << endl;
        cout << "bill: " << *bill << endl;
    }

    ~booking()
    {
        delete bill;
    }
};

int main()
{
    booking b1(205, "deluxe", 15000);

    booking b2 = b1;

    cout << "before update:" << endl;
    b1.show();
    b2.show();

    b1.set_bill(18000);

    cout << "\nafter updating active booking:" << endl;
    b1.show();
    b2.show();

    b2.set_bill(12000);

    cout << "\nafter updating archived booking:" << endl;
    b1.show();
    b2.show();

    return 0;
}