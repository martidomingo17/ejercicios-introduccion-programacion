#include <iostream>
using namespace std;

void hanoi(int discos, int origen, int destino, int auxiliar) {
    if (discos == 1) {
        cout << origen << " -> " << destino << "\n";
        return;
    }

    hanoi(discos - 1, origen, auxiliar, destino);
    cout << origen << " -> " << destino << "\n";
    hanoi(discos - 1, auxiliar, destino, origen);
}

int main() {
    int discos;
    cout << "Numero de discos: ";
    if (!(cin >> discos) || discos < 1) {
        cout << "Introduce al menos un disco.\n";
        return 1;
    }

    cout << "Movimientos de la varilla 1 a la 3:\n";
    hanoi(discos, 1, 3, 2);
    return 0;
}
