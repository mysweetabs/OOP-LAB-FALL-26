#include <iostream>
#include <string>
using namespace std;

class doc
{
    int id;
    string title;
    double *size;

public:
    doc(int i, string t, double s)
    {
        id = i;
        title = t;

        size = new double;
        *size = s;
    }

    doc()
    {
        id = 0;
        title = "unknown";

        size = new double;
        *size = 0;
    }

    doc(const doc &d)
    {
        id = d.id;
        title = d.title;

        size = new double;
        *size = *d.size;
    }

    void set_size(double s)
    {
        *size = s;
    }

    void show()
    {
        cout << "id: " << id << endl;
        cout << "title: " << title << endl;
        cout << "size: " << *size << endl;
    }

    ~doc()
    {
        delete size;
        cout << "document cleaned up" << endl;
    }
};

int main()
{
    doc d1(101, "report", 250);

    doc d2;

    doc d3 = d1;

    cout << "original:" << endl;
    d1.show();

    cout << "\nplaceholder:" << endl;
    d2.show();

    cout << "\npreview:" << endl;
    d3.show();

    d3.set_size(500);

    cout << "\nafter changing preview:" << endl;

    cout << "original:" << endl;
    d1.show();

    cout << "\npreview:" << endl;
    d3.show();

    return 0;
}