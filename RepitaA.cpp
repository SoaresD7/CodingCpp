#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Insira um número inteiro positivo: ";
        cin >> num;

        if (num < 0) {
            cout << "Por favor, insira um número positivo." << endl;
        }
    } while (num < 0);

	
    cout << "Números pares entre 0 e " << num << ":" << endl;
    for (int i = 0; i <= num; i += 2) {
        cout << i << endl;
    }

    return 0;
}
