#include <iostream>
using namespace std;

class A
{
public:
    int x; 
    A() { x = 10; }
};

// VIRTUAL MAKES IT SO THAT DERIVED CLASSES DONT GET DIFF COPIES OF THE SAME MEMBER
class B : virtual public A
{
};

class C : virtual public A
{
};

class D : public B, public C
{
};

int main()
{
    D d;
    cout << d.x << "\n"; 

    return 0;
}
