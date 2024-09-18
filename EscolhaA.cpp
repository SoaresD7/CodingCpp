#include <iostream>
using namespace std;

int main() {
    cout << "Menu: " << endl;
    cout << "1 - Bom dia" << endl;
    cout << "2 - Boa tarde" << endl;
    cout << "3 - Boa noite" << endl;

    int opcao;
    cout << "Escolha uma opção (1, 2 ou 3): ";
    cin >> opcao;

    switch (opcao) {
        case 1:
            cout << "Bom dia! Tenha um ótimo dia e se divirta!" << endl;
            break;
        case 2:
            std::cout << "Boa tarde! Faça todas suas obrigações e aproveite o restante do seu dia!" << endl;
            break;
        case 3:
            cout << "Boa noite! Tenha uma ótima noite de sono!" << endl;
            break;
        default:
            cout << "Opção inválida! Por favor, escolha uma opção de 1 a 3." << endl;
    }

    return 0;
}
