#include <iostream>
#include <string>
using namespace std;

bool ehPalindromo(string texto) {
    int inicio = 0;
    int fim = texto.length() - 1;

    while (inicio < fim) {
        if (tolower(texto[inicio]) != tolower(texto[fim])) {
            return false;
        }
        inicio++;
        fim--;
    }
    return true;
}

int main() {
    string palavra;
    cout << "Digite uma palavra: ";
    cin >> palavra;

    if (ehPalindromo(palavra)) {
        cout << palavra << " e um palindromo!" << endl;
    } else {
        cout << palavra << " nao e um palindromo." << endl;
    }

    return 0;
}
