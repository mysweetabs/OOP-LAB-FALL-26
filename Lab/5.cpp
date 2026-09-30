#include <iostream>
#include <string>
using namespace std;

class Animal
{
    string name;
    public:
    // Animal(){}
    string getName() const { return name; }
};

class Bird : public Animal
{
};

class Mammal : public Animal
{
};

class Bat : public Bird, public Mammal
{
};

int main()
{
    Bat b1;
    // cout << b1.getName() << endl;
    return 0;
}