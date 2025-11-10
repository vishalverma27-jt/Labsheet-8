#include <iostream>
using namespace std;

class Shape {
public:
    virtual float area() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    float r;
    Circle(float radius) { r = radius; }

    float area() {
        return 3.14 * r * r;
    }
};

class Rectangle : public Shape {
public:
    float l, b;
    Rectangle(float length, float breadth) {
        l = length;
        b = breadth;
    }

    float area() {
        return l * b;
    }
};

int main() {
    Circle c(5);
    Rectangle r(4, 6);

    cout << "Area of Circle = " << c.area() << endl;
    cout << "Area of Rectangle = " << r.area() << endl;
}
