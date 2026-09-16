#include <iostream>
using namespace std;
class Product
{

    const string productCode;
    static int capacity;
    string productName;
    int quantity;

public:
    Product(string c, string pn, int n) : productCode(c), productName(pn), quantity(n) { capacity -= quantity; }

    void setproductName(string s) { productName = s; }
    void setquantity(int n) { quantity = n; }

    string getproductName() const { return productName; }
    int getquantity() const { return quantity; }
    static int getcapacity() { return capacity; }

    ~Product()
    {
        capacity += quantity;
        cout << "\nProduct removed!" << endl;
        cout << "\nCurrent capacity: " << Product::getcapacity() << endl; // adds back the capacity that the removed product was taking up
    }
};

int Product::capacity = 50;

int main()
{
    Product m1("001", "controller", 5);
    Product m2("007", "keyboard", 10);
    Product m3("084", "mouse", 15);
    cout << "\nCurrent capacity: " << Product::getcapacity() << endl;

    return 0;
}
