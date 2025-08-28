#include <iostream>
using namespace std;

string ordem(int v[]) {
    bool crescente = true, decrescente = true;
    for (int i = 0; i < 4; i++) {
        if (v[i] > v[i+1]) crescente = false;
        if (v[i] < v[i+1]) decrescente = false;
    }
    if (crescente) return "Crescente";
    if (decrescente) return "Decrescente";
    return "Nao ordenado";
}

int main() {
    int v[5];
    for (int i=0; i<5; i++) {
        cout << "Digite o numero " << i+1 << ": ";
        cin >> v[i];
    }
    cout << "Ordem: " << ordem(v);
}
