#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    cout << "Introduce un entero de cuatro cifras: ";
    if (!(cin >> numero) || numero < 1000 || numero > 9999) {
        cout << "El numero debe estar entre 1000 y 9999.\n";
        return 1;
    }

    int a = (numero / 1000 + 7) % 10;
    int b = (numero / 100 % 10 + 7) % 10;
    int c = (numero / 10 % 10 + 7) % 10;
    int d = (numero % 10 + 7) % 10;
    int cifrado = c * 1000 + d * 100 + a * 10 + b;

    cout << "Cifrado: " << setfill('0') << setw(4) << cifrado << "\n";
    return 0;
}
