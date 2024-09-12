#include <iostream>
using namespace std;
int main() {
    int numero;

    
    cout << "Digite um número inteiro: ";
    cin >> numero;

    
    if (numero < 0) {
        cout << "O número digitado é negativo." << endl;
    } else {
        cout << "O número digitado não é negativo." << endl;
    }

    return 0;
}
