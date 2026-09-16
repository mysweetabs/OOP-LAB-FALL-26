#include <iostream>
using namespace std;

class book
{
    string name;
    string author;
    string id;

public:
    book()
    {
        name = "unknown";
        author = "unknown";
        id = "000";
    }

    // book(); // Default constructor

    void setName(string str)
    {
        name = str;
    }

    void setAuthor(string au)
    {
        author = au;
    }

    void setID(string ID)
    {
        id = ID;
    }

    string getName()
    {
        return name;
    }

    string getAuthor()
    {
        return author;
    }

    string getID()
    {
        return id;
    }

    void Cancel()
    {
        cout << "\nThe reservation for " << name << " has been cancelled" << endl;
    }

    void printDetails()
    {
        cout << "\n"
             << name << endl;
        cout << author << endl;
        cout << id << endl;
    }
};

int main()
{
    book s1;
    book s2;
    book s3;

    s1.setName("DB");
    s2.setName("Bleach");
    s3.setName("Demon slayer");

    s1.setAuthor("akira toriyam");
    s2.setAuthor("tite kubo");
    s3.setAuthor("keine ahnung");

    s1.setID("001");
    s2.setID("002");
    s3.setID("003");

    s1.printDetails();
    s2.printDetails();
    s3.printDetails();

    s1.Cancel();

    return 0;
}