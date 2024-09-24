#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    cout << "Digite um número inteiro: ";
    cin >> num;

    
    if (num % 2 == 0) {
        std::cout << "O número é par." << endl;
    } else {
        std::cout << "O número é ímpar." << endl;
    }

    return 0;
}

