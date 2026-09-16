#include <iostream>
#include <string>
using namespace std;

class Book
{
    string ID;
    string title;
    bool availability;

public:
    void addBook(string t, string i)
    {
        title = t;
        ID = i;
        availability = true;
    }

    void issueBook()
    {
        if (availability == true)
        {
            cout << "\nBook has been issued!" << endl;
            availability = false;
        }
        else
            cout << "\nBook is already issued!" << endl;
    }

    void returnBook()
    {
        availability = true;
    }

    void displayDetails()
    {
        cout << "\nTitle: " << title << endl;
        cout << "ID: " << ID << endl;
        if (availability = true)
            cout << "Availibility Status: Available" << endl;
        else
            cout << "Availibility Status: Not available" << endl;
    }
};

int main()
{
    Book b1, b2, b3;
    b1.addBook("DBZ", "000001");
    b2.addBook("Bleach", "000002");
    b3.addBook("Solo leveling", "000003");

    b1.displayDetails(); //  Testing code
    b2.displayDetails();
    b3.displayDetails();

    b1.issueBook();
    b1.issueBook();
    b1.returnBook();
    b1.displayDetails();
    // b1.issueBook();

    return 0;
}