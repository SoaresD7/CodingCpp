#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    
    cout << "Digite um número inteiro: ";
    cin >> num;

    
    if (num % 2 != 0) {
        cout << "O número é ímpar." << endl;
    } else {
        cout << "O número é par." << endl;
    }

    return 0;
}

