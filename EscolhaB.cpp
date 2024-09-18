#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Calculadora: " << endl;
    cout << "1 - Adição" << endl;
    cout << "2 - Subtração" << endl;
    cout << "3 - Multiplicação" << endl;
    cout << "4 - Divisão" << endl;

    int opcao;
    cout << "Escolha uma opção (1, 2, 3 ou 4): ";
    cin >> opcao;
    
    int n1, n2;
    cout << "Digite um número: " << endl;
    cin >> n1;
    cout << "Digite outro número: " << endl;
    cin >> n2;

    switch (opcao) {
        case 1:
            cout << "A adição dos números digitados é: " << n1 + n2 << endl;
            break;
        case 2:
            std::cout << "A subtração dos números digitados é: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "A multiplicação dos números digitados é: " << n1 * n2 << endl;
            break;
             case 4:
            cout << "A divisão dos números digitados é: " << n1 / n2 << endl;
            break;
        default:
            cout << "Opção inválida! Por favor, escolha uma opção de 1 a 4." << endl;
    }

    return 0;
}
