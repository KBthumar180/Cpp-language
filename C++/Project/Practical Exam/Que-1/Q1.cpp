#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNumber;

public:
    Student(string n,int r){
        name=n;
        rollNumber=r;
    }

    void display() {
        cout<<"Name:-"<<name<<",Roll Number:-"<<rollNumber<<endl;
    }
};

main(){   
    Student s1("jay", 101);
    Student s2("Arav", 102); 
    s1.display();
    s2.display();
}

