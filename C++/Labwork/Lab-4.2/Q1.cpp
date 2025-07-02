#include <iostream>
using namespace std;

class RBI {
protected:
    float rate;

public:
    void setRate(float r) {
        rate = r;
    }

    float getRate() {
        return rate;
    }
};

class SBI : public RBI {
public:
    void getROI() {
        cout << "SBI Rate of Interest: " << getRate() << "%" << endl;
    }
};

class BOB : public RBI {
public:
    void getROI() {
        cout << "BOB Rate of Interest: " << getRate() << "%" << endl;
    }
};

class ICICI : public RBI {
public:
    void getROI() {
        cout << "ICICI Rate of Interest: " << getRate() << "%" << endl;
    }
};

 main() {
    SBI s;
    BOB b;
    ICICI i;

    s.setRate(6.5);
    b.setRate(7.0);
    i.setRate(6.8);

    s.getROI();
    b.getROI();
    i.getROI();

}

