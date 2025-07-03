#include <iostream>
using namespace std;

class A {
  
};

class B : public A {
public:
    void calculate(int a, int b) {
        cout << "Division: " << a / b << endl;
    }

    void calculate(int a, int b, int c) {
        cout << "Subtraction: " << a - b - c << endl;
    }

    void calculate(int a, int b, int c, int d) {
        cout << "Multiplication: " << a * b * c * d << endl;
    }

    void calculate(int a, int b, int c, int d, int e) {
        cout << "Addition: " << a + b + c + d + e << endl;
    }
};

main() {
    B obj;

    obj.calculate(10, 2);                   
    obj.calculate(20, 5, 3);                
    obj.calculate(1, 2, 3, 4);            
    obj.calculate(1, 2, 3, 4, 5);           

}

