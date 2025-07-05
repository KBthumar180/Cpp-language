#include <iostream>
using namespace std;

class Device{
private:
    string brand;
    int powerConsumption;

public:
    void setDevice(string b,int p){
        brand=b;
        powerConsumption=p;
    }
    virtual void displayInfo(){
        cout<<"Brand:-"<<brand<<",Power:-"<<powerConsumption<<"W"<<endl;
    }
};

class Laptop : public Device {
public:
    void displayInfo() override{
        cout<<"Laptop Information:-";
        Device::displayInfo();
    }
};

class Smartphone : public Device{
public:
    void displayInfo() override{
        cout<<"Smartphone Information:-";
        Device::displayInfo();
    }
};

main(){
    Laptop l;
    Smartphone s;
    l.setDevice("HP",65);
    s.setDevice("Dell",20);
    l.displayInfo();
    s.displayInfo();
}

