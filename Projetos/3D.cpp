#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int num1, num2, num3;


    cout << "Digite o primeiro n�mero inteiro: ";
    cin >> num1;

    cout << "Digite o segundo n�mero inteiro: ";
    cin >> num2;

    cout << "Digite o terceiro n�mero inteiro: ";
    cin >> num3;

   
    if (num1 < num2 && num1 > num3) {
        cout << "O primeiro n�mero � menor que o segundo e maior que o terceiro." << endl;
    } else {
        cout << "O primeiro n�mero N�O � menor que o segundo e maior que o terceiro." << endl;
    }
}

