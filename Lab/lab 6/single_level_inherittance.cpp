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
    int getI() const { return i; }
    int getB() const { return b; }
};

class derived : public base
{
public:
    // THIS WILL CALL BASE CLASS CONSTRUCTOR WHEN CALLED
    derived(int i, int b) : base(i, b) {}
    void showData()
    {
        cout << "i = " << getI() << endl
             << "b = " << getB();
    }
};

int main()
{
    // CREATE OBJ OF DERIVED CLASS ONLY
    derived d1(4, 5);
    d1.showData();

    return 0;
}