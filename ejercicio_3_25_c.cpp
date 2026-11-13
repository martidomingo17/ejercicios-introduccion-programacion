#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long double x;
    int terminos;
    cout << "Valor de x: ";
    if (!(cin >> x)) return 1;
    cout << "Numero de terminos (incluyendo el 1 inicial): ";
    if (!(cin >> terminos) || terminos < 1) {
        cout << "Introduce al menos un termino.\n";
        return 1;
    }

    long double suma = 1;
    long double termino = 1;
    int i = 1;
    while (i < terminos) {
        termino *= x / i; // Calcula x^i/i! a partir del termino anterior.
        suma += termino;
        ++i;
    }

    cout << setprecision(15) << "e^x aproximado = " << suma << "\n";
    return 0;
}
