#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    
    if (num % 2 == 0) {
        std::cout << "O n�mero � par." << endl;
    } else {
        std::cout << "O n�mero � �mpar." << endl;
    }

    return 0;
}

