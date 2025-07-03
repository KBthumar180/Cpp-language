#include <iostream>
using namespace std;

class Cricket {
public:
    virtual void getTotalOvers() {
        cout << "General cricket match overs: varies by format." << endl;
    }
};

class T20Match : public Cricket {
public:
    void getTotalOvers() override {
        cout << "T20 Match has 20 overs." << endl;
    }
};

class TestMatch : public Cricket {
public:
    void getTotalOvers() override {
        cout << "Test Match has unlimited overs (usually 90/day)." << endl;
    }
};

int main() {
    Cricket* match;

    T20Match t20;
    TestMatch test;

    match = &t20;
    match->getTotalOvers(); 

    match = &test;
    match->getTotalOvers(); 
}

