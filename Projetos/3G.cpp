#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num;

    
    cout << "Digite um n�mero inteiro: ";
    cin >> num;

    
    if (num % 2 != 0) {
        cout << "O n�mero � �mpar." << endl;
    } else {
        cout << "O n�mero � par." << endl;
    }

    return 0;
}

