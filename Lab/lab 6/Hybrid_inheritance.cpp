#include <iostream>
using namespace std;

class base
{
public:
    int i, b;
    void setData(int i, int b)
    {
        this->i = i;
        this->b = b;
    }
};

// Use 'virtual' inheritance here to solve the Diamond Problem for derived3
class derived1 : virtual public base
{
public:
    int x, y;
    void setXY(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    void showData1()
    {
        cout << "This is the data of Base class set by derived class 1\n";
        cout << "i = " << i << "\nb = " << b << "\n";
    }
};

// Use 'virtual' inheritance here as well
class derived2 : virtual public base
{
public:
    int u, v;
    void setUV(int u, int v)
    {
        this->u = u;
        this->v = v;
    }
    void showData2()
    {
        cout << "This is the data of Base class set by derived class 2\n";
        cout << "i = " << i << "\nb = " << b << "\n";
    }
};

// derived3 inherits from base through derived1 and derived2
class derived3 : public derived1, public derived2
{
public:
    void showData3()
    {
        cout << "This is the data of derived class 1 set by derived class 3\n";
        cout << "x = " << x << "\ny = " << y << "\n";
        cout << "This is the data of derived class 2 set by derived class 3\n";
        cout << "u = " << u << "\nv = " << v << "\n";
    }
};

int main()
{
    derived1 d1;
    derived2 d2;
    derived3 d3;

    d1.setData(4, 5);
    d1.showData1();

    d2.setData(6, 7);
    d2.showData2();

    d3.setXY(10, 11);
    d3.setUV(12, 13);
    d3.showData3();

    return 0;
}
