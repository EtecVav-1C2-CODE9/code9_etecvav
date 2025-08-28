#include <iostream>
#include <cmath> 

using namespace std;


double calcularArea(double raio) {
    return M_PI * pow(raio, 2);
}

int main() {
    double raio;
    double somaAreas = 0.0;

    cout << "Digite o raio de 5 circulos:\n";

    for (int i = 1; i <= 5; ++i) {
        cout << "Raio do circulo " << i << ": ";
        cin >> raio;

        double area = calcularArea(raio);
        somaAreas += area;
    }

    cout << "A soma das areas dos circulos eh: " << somaAreas << endl;

    return 0;
}
