#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double pi = 0;
    int signo = 1;
    int primero = 0;

    cout << "Terminos: 200000\n";
    cout << left << setw(12) << "Termino" << "Pi\n";
    cout << fixed << setprecision(8);

    for (int i = 1; i < 200000; ++i) {
        pi += signo * 4.0 / (2 * i - 1);
        signo = -signo;
        cout << left << setw(12) << i << pi << "\n";

        // Se comprueba el prefijo decimal, sin redondear.
        if (primero == 0 && pi >= 3.14159 && pi < 3.14160) {
            primero = i;
        }
    }

    if (primero != 0) {
        cout << "Primer termino que empieza por 3.14159: " << primero << "\n";
    } else {
        cout << "No se ha alcanzado ese prefijo en los 200000 terminos.\n";
    }
    return 0;
}
