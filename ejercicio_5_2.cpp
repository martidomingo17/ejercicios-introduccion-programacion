#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateCharges(double horas) {
    double importe = 20.0;
    if (horas > 3) {
        importe += ceil(horas - 3) * 5.0;
    }
    if (importe > 50.0) {
        importe = 50.0;
    }
    return importe;
}

int main() {
    double horas[3];
    for (int i = 0; i < 3; ++i) {
        cout << "Horas del cliente " << i + 1 << ": ";
        if (!(cin >> horas[i]) || horas[i] <= 0 || horas[i] > 24) {
            cout << "Las horas deben ser mayores que 0 y como maximo 24.\n";
            return 1;
        }
    }

    double totalHoras = 0;
    double totalImportes = 0;
    cout << "\n" << left << setw(10) << "Coche"
         << right << setw(10) << "Horas" << setw(14) << "Importe ($)" << "\n";
    for (int i = 0; i < 3; ++i) {
        double importe = calculateCharges(horas[i]);
        cout << left << setw(10) << i + 1 << right << fixed << setprecision(2)
             << setw(10) << horas[i] << setw(14) << importe << "\n";
        totalHoras += horas[i];
        totalImportes += importe;
    }
    cout << left << setw(10) << "TOTAL" << right
         << setw(10) << totalHoras << setw(14) << totalImportes << "\n";
    return 0;
}
