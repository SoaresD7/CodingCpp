#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int ano;

    cout << "Digite um ano: ";
    cin >> ano;


    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        cout << "O ano " << ano << " é bissexto." << endl;
    } else {
        cout << "O ano " << ano << " não é bissexto." << endl;
    }

    return 0;
}

