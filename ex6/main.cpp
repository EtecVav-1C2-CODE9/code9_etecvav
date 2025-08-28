#include <iostream>
#include <string>
using namespace std;


string diaDaSemana(int dia, int mes, int ano) {
    if (mes < 3) {
        mes += 12;
        ano -= 1;
    }

    int K = ano % 100;
    int J = ano / 100;

    int h = (dia + 13*(mes + 1)/5 + K + K/4 + J/4 + 5*J) % 7;

    
    string dias[7] = { "Sabado", "Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta" };

    return dias[h];
}

int main() {
    int dia, mes, ano;

    cout << "Digite o dia: ";
    cin >> dia;
    cout << "Digite o mes: ";
    cin >> mes;
    cout << "Digite o ano: ";
    cin >> ano;

    string diaSemana = diaDaSemana(dia, mes, ano);
    cout << "O dia da semana correspondente e: " << diaSemana << endl;

    return 0;
}
