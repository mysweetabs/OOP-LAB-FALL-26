#include <iostream>
using namespace std;

class base
{
    int i, b;

public:
    base(int i, int b)
    {
        this->i = i;
        this->b = b;
    }
    int geti() const { return i; }
    int getb() const { return b; }
};

class derived1 : public base
{
    int j, c;

public:
    derived1(int i, int b, int j, int c) : base(i, b), j(j), c(c) {}
    int getj() const { return j; }
    int getc() const { return c; }

    // BOTH METHODS ARE VIABLE
    // derived1(int i, int b, int j, int c) : base(i, b)
    // {
    //     this->j = j;
    //     this->c = c;
    // }

    void showData1()
    {
        cout << "i = " << geti() << endl
             << "b = " << getb() << endl;
    }
};

class derived2 : public derived1
{
public:
    derived2(int i, int b, int j, int c) : derived1(i, b, j, c) {}
    void showData2()
    {
        cout << "j = " << getj() << endl
             << "c = " << getc() << endl;
    }
};

int main()
{
    // CREATE OBJ OF DERIVED CLASS
    derived2 d2(4, 5, 6, 7);
    d2.showData1();
    d2.showData2();
    return 0;
}
