#include <iostream>
using namespace std;

class Car{
private:
    string model;
    int year;
    float speed;

public:
    void setDetails(string m,int y,float s){
        model=m;
        year=y;
        speed=s;
    }
    void getDetails(){
        cout <<"Model:-"<<model<<",Year:-"<<year<<",Speed:-"<<speed<<"km/h"<<endl;
    }
};

main(){
    Car myCar;

    myCar.setDetails("Bugatti Chiron",2023,400);
    myCar.getDetails();
}

