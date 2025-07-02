#include <iostream>
using namespace std;

class A {
protected:
    int a, b;

public:
    A(int x, int y) {
        a = x;
        b = y;
    }
};

class B {
protected:
    int c;

public:
    B(int z) {
        c = z;
    }
};

class C : public A {
public:
    C(int x, int y) : A(x, y) {}
};

class D : public C, public B {
    int d;

public:
    D(int x, int y, int z, int w) : C(x, y), B(z), d(w) {}

    void sum() {
        int total = a + b + c + d;
        cout << "Sum of all four numbers: " << total << endl;
    }
};

 main() {
    D obj(10, 20, 30, 40);
    obj.sum();
}

