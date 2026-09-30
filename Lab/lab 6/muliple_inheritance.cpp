#include <iostream>
using namespace std;

class base1
{
    int i, b;
public:
    base1(int i, int b)
    {
        this->i = i;
        this->b = b;
    }
    int geti() const { return i; }
    int getb() const { return b; }
};

class base2
{
    int j, c;
public:
    base2(int j, int c)
    {
        this->j = j;
        this->c = c;
    }
    int getj() const { return j; }
    int getc() const { return c; }
};

class derived : public base1, public base2
{
public:
    derived(int i, int b, int j, int c) : base1(i, b),
                                          base2(j, c) {}
    void showData1()
    {
        cout << "i = " << geti() << endl
             << "b = " << getb() << endl;
    }
    void showData2()
    {
        cout << "j = " << getj() << endl
             << "c = " << getc() << endl;
    }
};
int main()
{
    derived d1(4, 5, 6, 7);
    d1.showData1();
    d1.showData2();
    return 0;
