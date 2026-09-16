#include <iostream>
using namespace std;

class Catalog
{
public:
    string title;
    string author;
    string genre;
    double price;
};

void printAllEntries(Catalog o1, Catalog o2, Catalog o3)
{
    cout << "\nTitle: " << o1.title << endl;
    cout << "Author: " << o1.author << endl;
    cout << "Genre: " << o1.genre << endl;
    cout << "Price: $" << o1.price << endl;

    cout << "\nTitle: " << o2.title << endl;
    cout << "Author: " << o2.author << endl;
    cout << "Genre: " << o2.genre << endl;
    cout << "Price: $" << o2.price << endl;

    cout << "\nTitle: " << o3.title << endl;
    cout << "Author: " << o3.author << endl;
    cout << "Genre: " << o3.genre << endl;
    cout << "Price: $" << o3.price << endl;
}

void printAllEntries_2(Catalog o[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nTitle: " << o[i].title << endl;
        cout << "Author: " << o[i].author << endl;
        cout << "Genre: " << o[i].genre << endl;
        cout << "Price: $" << o[i].price << endl;
    }
}

int main()
{
    Catalog c1, c2, c3;
    c1 = {"Dragon Ball", "Akira toriyama", "Shounen", 24.99};
    c2 = {"Bleach", "Tite Kubo", "Sheinen", 25.99};
    c3 = {"Hunter X Hunter", "Unknown", "horror", 26.99};

    Catalog arr[3] = {c1, c2, c3};

    printAllEntries(c1, c2, c3);    // hard coded
    printAllEntries_2(arr, 3);      // variable number of objects

    return 0;
}