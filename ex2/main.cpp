#include <iostream>
using namespace std;

int potencia(int base, int exp) {
    int r = 1;
    for (int i = 0; i < exp; i++) r *= base;
    return r;
}

int main() {
    int b, e;
    cin >> b >> e;
    cout << potencia(b, e);
}
