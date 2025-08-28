#include <iostream>
using namespace std;

float pesoIdealMasc(float h) {
    return 72.7 * h - 58;
}

float pesoIdealFem(float a) {
    return 62.1 * a - 44.7;
}

int main() {
    char s;
    float a;
    cout << "Digite o sexo (M/F): ";
    cin >> s;
    cout << "Digite a altura (em metros): ";
    cin >> a;
    if (s == 'M' || s == 'm') cout << "Peso ideal: " << pesoIdealMasc(a);
    else cout << "Peso ideal: " << pesoIdealFem(a);
}
