#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr)));
    int n;

    n = 1 + rand() % 2;
    cout << "a) " << n << "\n";
    n = 1 + rand() % 100;
    cout << "b) " << n << "\n";
    n = rand() % 10;
    cout << "c) " << n << "\n";
    n = 1000 + rand() % 113;
    cout << "d) " << n << "\n";
    n = -1 + rand() % 3;
    cout << "e) " << n << "\n";
    n = -3 + rand() % 15;
    cout << "f) " << n << "\n";
    return 0;
}
