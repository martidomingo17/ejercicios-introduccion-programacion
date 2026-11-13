#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Introduce un entero no negativo: ";
    if (!(cin >> n) || n < 0) {
        cout << "El numero debe ser un entero no negativo.\n";
        return 1;
    }

    // Cada posicion guarda una cifra, empezando por las unidades.
    vector<int> cifras(1, 1);
    long long factor = 2;
    while (factor <= n) {
        long long llevada = 0;
        size_t i = 0;
        while (i < cifras.size()) {
            long long producto = cifras[i] * factor + llevada;
            cifras[i] = producto % 10;
            llevada = producto / 10;
            ++i;
        }
        while (llevada > 0) {
            cifras.push_back(llevada % 10);
            llevada /= 10;
        }
        ++factor;
    }

    cout << n << "! = ";
    size_t i = cifras.size();
    while (i > 0) {
        --i;
        cout << cifras[i];
    }
    cout << "\n";
    return 0;
}
