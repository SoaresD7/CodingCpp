#include <iostream>
using namespace std;

int main() {
    cout << "Menu: " << endl;
    cout << "1 - Bom dia" << endl;
    cout << "2 - Boa tarde" << endl;
    cout << "3 - Boa noite" << endl;

    int opcao;
    cout << "Escolha uma op��o (1, 2 ou 3): ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Bom dia! Tenha um �timo dia e se divirta!" << endl;
            break;
        case 2:
            std::cout << "Boa tarde! Fa�a todas suas obriga��es e aproveite o restante do seu dia!" << endl;
            break;
        case 3:
            cout << "Boa noite! Tenha uma �tima noite de sono!" << endl;
            break;
        default:
            cout << "Op��o inv�lida! Por favor, escolha uma op��o de 1 a 3." << endl;
    }

    return 0;
}
