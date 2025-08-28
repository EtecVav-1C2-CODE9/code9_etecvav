#include <iostream>
#include <cctype>
using namespace std;

bool vogal(char c) {
    c = tolower(c);
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u';
}

int main() {
    string nome;
    cout << "Digite o nome completo: ";
    getline(cin, nome);
    int v=0, c=0;
    for (char x : nome) {
        if (isalpha(x)) {
            if (vogal(x)) v++;
            else c++;
        }
    }
    cout << "Vogais: " << v << " Consoantes: " << c;
}
