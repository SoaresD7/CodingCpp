#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "Calculadora: " << endl;
    cout << "1 - Adi��o" << endl;
    cout << "2 - Subtra��o" << endl;
    cout << "3 - Multiplica��o" << endl;
    cout << "4 - Divis�o" << endl;

    int opcao;
    cout << "Escolha uma op��o (1, 2, 3 ou 4): ";
    cin >> opcao;
    
    int n1, n2;
    cout << "Digite um n�mero: " << endl;
    cin >> n1;
    cout << "Digite outro n�mero: " << endl;
    cin >> n2;

    switch (opcao) {
        case 1:
            cout << "A adi��o dos n�meros digitados �: " << n1 + n2 << endl;
            break;
        case 2:
            std::cout << "A subtra��o dos n�meros digitados �: " << n1 - n2 << endl;
            break;
        case 3:
            cout << "A multiplica��o dos n�meros digitados �: " << n1 * n2 << endl;
            break;
             case 4:
            cout << "A divis�o dos n�meros digitados �: " << n1 / n2 << endl;
            break;
        default:
            cout << "Op��o inv�lida! Por favor, escolha uma op��o de 1 a 4." << endl;
    }

    return 0;
}
