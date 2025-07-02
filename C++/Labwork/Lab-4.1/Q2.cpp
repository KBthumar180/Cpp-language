#include <iostream>
using namespace std;

class P {
protected:
    float temperature; 

public:
    void setTemp(float t) {
        temperature = t;
    }
};

class Q : public P {
public:
    float toFahrenheit() {
        return (temperature * 9 / 5) + 32;
    }
};

class R : public Q {
public:
    float toKelvin() {
        return temperature + 273.15;
    }
};

 main() {
    R obj;
    float tempC;
    cout << "Enter temperature in Celsius: ";
    cin >> tempC;

    obj.setTemp(tempC);
    cout << "Fahrenheit: " << obj.toFahrenheit() << endl;
    cout << "Kelvin: " << obj.toKelvin() << endl;
}

