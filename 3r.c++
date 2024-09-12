#include <iostream>
#include <string> 

using namespace std;

int main() {
    string nome;
    int idade;

    
    cout << "Digite seu nome: ";
    cin >> nome; 

    
    cout << "Digite sua idade: ";
    cin >> idade;

    
    if (nome.length() > 3 && idade >= 18) {
        cout << "Acesso Liberado." << endl;
    } else {
        cout << "Acesso Negado." << endl;
    }

    return 0;
}
