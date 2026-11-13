#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numero;
    cout << "Introduce el numero cifrado (puede empezar por cero): ";
    if (!(cin >> numero) || numero < 0 || numero > 9999) {
        cout << "El codigo debe estar entre 0000 y 9999.\n";
        return 1;
    }

    // Sumar 3 modulo 10 deshace la suma de 7.
    int a = (numero / 1000 + 3) % 10;
    int b = (numero / 100 % 10 + 3) % 10;
    int c = (numero / 10 % 10 + 3) % 10;
    int d = (numero % 10 + 3) % 10;
    int original = c * 1000 + d * 100 + a * 10 + b;

    cout << "Original: " << setfill('0') << setw(4) << original << "\n";
    return 0;
}
