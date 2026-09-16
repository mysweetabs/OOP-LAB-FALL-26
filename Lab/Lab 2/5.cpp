#include <iostream>
#include <string>
using namespace std;

class car
{
public:
    string model;
    int year;
    double price;

    void input()
    {
        cout << "enter model: " << endl;
        getline(cin, model);
        cout << "enter price: " << endl;
        cin >> price;
        cout << "enter year: " << endl;
        cin >> year;
        cin.ignore();
    }

    void display()
    {
        cout << "\nModel: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    car c1, c2, c3;
    c1.input();
    c2.input();
    c3.input();
    if (c1.price > c2.price && c1.price > c3.price)
    c1.display();
    else if (c2.price > c1.price && c2.price > c3.price)
    c2.display();
    else if (c3.price > c2.price && c3.price > c1.price)
    c3.display();
    else 
    cout << "All three cars have the same price" << endl;

    return 0;
}
