#include <iostream>
#include <cmath>
using namespace std;

class Distance {
    int feet;
    float inches;
public:
    void set(int f, float i) {
        feet = f + static_cast<int>(i) / 12;
        inches = fmod(i, 12);
    }
    void disp() const {
        cout << feet << " feet " << inches << " inches\n";
    }
    Distance add(const Distance& d) const {
        Distance temp;
        temp.inches = inches + d.inches;
        temp.feet = feet + d.feet + static_cast<int>(temp.inches) / 12;
        temp.inches = fmod(temp.inches, 12);
        return temp;
    }
};

int main() {
    Distance d1, d2, d3;
    d1.set(5, 8.5);
    d2.set(3, 9.5);
    d3 = d1.add(d2);
    cout << "Distance 1: "; d1.disp();
    cout << "Distance 2: "; d2.disp();
    cout << "Sum: "; d3.disp();
    return 0;
}