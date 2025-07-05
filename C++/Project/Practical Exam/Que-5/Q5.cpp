#include <iostream>
using namespace std;

class Animal{
public:
    virtual void makeSound()=0;
    virtual void move()=0;
};

class Lion:public Animal{
public:
    void makeSound() override{
        cout <<"Lion Roars"<<endl;
    }

    void move() override{
        cout <<"Lion runs"<<endl;
    }
};

class Fish:public Animal{
public:
    void makeSound() override {
        cout<<"Fish makes bubbles"<<endl;
    }

    void move() override{
        cout<<"Fish swims"<<endl;
    }
};

main(){
    Animal*a1=new Lion();
    Animal*a2=new Fish();
    a1->makeSound();
    a1->move();
    a2->makeSound();
    a2->move();
    delete a1;
    delete a2;
}

