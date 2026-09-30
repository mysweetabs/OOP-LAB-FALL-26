#include <iostream>
#include <string>
using namespace std;

class Shape
{
    string color;

public:
    Shape(string c) : color(c) {}
    string getColor() const { return color; }

};

class Circle : public Shape
{
    int radius;

public:
    Circle(string c, int r) : Shape(c), radius(r) {}
    void print() const{
        cout << getColor() << endl;
        cout << radius << endl;
    }
};

class Triangle : public Shape
{
    int hypotenuse;

public:
    Triangle(string c, int h) : Shape(c), hypotenuse(h) {}
    void print() const{
        cout << getColor() << endl;
        cout << hypotenuse << endl;
    }
};

class Square : public Shape
{
    int perimeter;

public:
    Square(string c, int p) : Shape(c), perimeter(p) {}
    void print() const{
        cout << getColor() << endl;
        cout << perimeter << endl;
    }
};

int main()
{
    Circle c1("red", 5);
    Triangle t1("blue", 50);
    Square s1("green", 500);   
    c1.print(); 
    t1.print(); 
    s1.print(); 
    return 0;
}