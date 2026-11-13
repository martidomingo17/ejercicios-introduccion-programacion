#include <iostream>
using namespace std;

long long invertirCifras(int numero) {
    long long invertido = 0;
    while (numero != 0) {
        invertido = invertido * 10 + numero % 10;
        numero /= 10;
    }
    return invertido;
}

int main() {
    int numero;
    cout << "Introduce un entero: ";
    if (!(cin >> numero)) return 1;
    cout << "Invertido: " << invertirCifras(numero) << "\n";
    return 0;
}
