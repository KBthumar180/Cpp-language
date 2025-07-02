#include <iostream>
using namespace std;

class X {
protected:
    int a, b, c;
};

class Y : public X {
public:
    void setData(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void getData() {
        int sumOfCubes = (a * a * a) + (b * b * b) + (c * c * c);
        cout << "Sum of cubes = " << sumOfCubes << endl;
    }
};

main() {
    Y obj;
    obj.setData(2, 3, 4);  
    obj.getData();

}

