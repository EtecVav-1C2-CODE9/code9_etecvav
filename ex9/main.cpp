#include <iostream>
using namespace std;

string troca(string s) {
    for (char &c : s) {
        if (string("aeiouAEIOU").find(c) != string::npos) c='*';
    }
    return s;
}

int main() {
    string p;
    cout << "Digite uma palavra: ";
    cin >> p;
    cout << "Resultado: " << troca(p);
}
