#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Insira um n�mero inteiro positivo: ";
        cin >> num;

        if (num < 0) {
            cout << "Por favor, insira um n�mero positivo." << endl;
        }
    } while (num < 0);

	
    cout << "N�meros pares entre 0 e " << num << ":" << endl;
    for (int i = 0; i <= num; i += 2) {
        cout << i << endl;
    }

    return 0;
}
