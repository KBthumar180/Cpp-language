#include<iostream>
using namespace std;

class Shape {
public:
    virtual void calculate() = 0;
};

class Circle : public Shape {
    float radius;
public:
    Circle(float r) { radius = r; }
    void calculate() override {
        cout << "Area of Circle: " << 3.1416 * radius * radius << endl;
    }
};

class Triangle : public Shape {
    float base, height;
public:
    Triangle(float b, float h) { base = b; height = h; }
    void calculate() override {
        cout << "Area of Triangle: " << 0.5 * base * height << endl;
    }
};

class Rectangle : public Shape {
    float length, width;
public:
    Rectangle(float l, float w) { length = l; width = w; }
    void calculate() override {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

main() {
    Circle c(5);
    Triangle t(4, 3);
    Rectangle r(6, 2.5);

    c.calculate();
    t.calculate();
    r.calculate();
}

