#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    x = fabs(7.5);
    cout << "a) " << x << "\n";
    x = floor(7.5);
    cout << "b) " << x << "\n";
    x = fabs(0.0);
    cout << "c) " << x << "\n";
    x = ceil(0.0);
    cout << "d) " << x << "\n";
    x = fabs(-6.4);
    cout << "e) " << x << "\n";
    x = ceil(-6.4);
    cout << "f) " << x << "\n";
    x = ceil(-fabs(-8 + floor(-5.5)));
    cout << "g) " << x << "\n";
    return 0;
}
