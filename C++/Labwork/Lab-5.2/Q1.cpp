#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
 
    Number(int v) {
        value = v;
    }

    bool operator<(Number obj) {
        return value < obj.value;
    }

    void display() {
        cout << "Value: " << value << endl;
    }

    int getValue() {
        return value;
    }
};

main() {
    int x, y;
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    Number n1(x), n2(y);

    cout << "\nComparing values...\n";
    if (n1 < n2) {
        cout << "Second object has the higher value: ";
        n2.display();
    } else {
        cout << "First object has the higher value: ";
        n1.display();
    }


}

