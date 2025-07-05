#include <iostream>
using namespace std;

class DeviceWithDiscount{
public:
    virtual float calculateDiscount()=0;
};

class LaptopWithDiscount:public DeviceWithDiscount {
public:
    float calculateDiscount() override{
        return 1000.0;
    }
};

class SmartphoneWithDiscount:public DeviceWithDiscount {
public:
    float calculateDiscount() override{
        return 500.0;
    }
};

main(){
	Laptop l;
    Smartphone s;
    l.setDevice("HP",65);
    s.setDevice("Apple",20);
    l.displayInfo();
    s.displayInfo();
    
    DeviceWithDiscount*d1=new LaptopWithDiscount();
    DeviceWithDiscount*d2=new SmartphoneWithDiscount();
    cout << "Laptop Discount:-"<<d1->calculateDiscount()<<endl;
    cout << "Smartphone Discount:-"<<d2->calculateDiscount()<<endl;
    delete d1;
    delete d2;
}

