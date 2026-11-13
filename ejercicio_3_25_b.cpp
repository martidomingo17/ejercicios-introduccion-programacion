#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int terminos;
    cout << "Numero de terminos (incluyendo el 1 inicial): ";
    if (!(cin >> terminos) || terminos < 1) {
        cout << "Introduce al menos un termino.\n";
        return 1;
    }

    long double suma = 1;
    long double termino = 1;
    int i = 1;
    while (i < terminos) {
        termino /= i; // Pasa de 1/(i-1)! a 1/i!.
        suma += termino;
        ++i;
    }

    cout << setprecision(15) << "e aproximado = " << suma << "\n";
    return 0;
}
