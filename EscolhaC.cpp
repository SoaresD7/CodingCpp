#include <iostream>
#include <string>

using namespace std;

int main() {
    int escolha;

    cout << "Escolha um dia da semana:" << endl;
    cout << "1 - Domingo" << endl;
    cout << "2 - Segunda-feira" << endl;
    cout << "3 - Terça-feira" << endl;
    cout << "4 - Quarta-feira" << endl;
    cout << "5 - Quinta-feira" << endl;
    cout << "6 - Sexta-feira" << endl;
    cout << "7 - Sábado" << endl;
    cout << "Digite o número correspondente ao dia: ";
    cin >> escolha;

    switch (escolha) {
        case 1:
        case 7:
            cout << "Hoje é final de semana." << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
            cout << "Hoje é dia útil." << endl;
            break;
        default:
            cout << "Escolha inválida! Por favor, escolha um número de 1 a 7." << endl;
            break;
    }

    return 0;
}
