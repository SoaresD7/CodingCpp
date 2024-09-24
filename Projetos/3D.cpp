#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num1, num2, num3;


    cout << "Digite o primeiro número inteiro: ";
    cin >> num1;

    cout << "Digite o segundo número inteiro: ";
    cin >> num2;

    cout << "Digite o terceiro número inteiro: ";
    cin >> num3;

   
    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro número é menor que o segundo e maior que o terceiro." << endl;
    } else {
        cout << "O primeiro número NÃO é menor que o segundo e maior que o terceiro." << endl;
    }
}

