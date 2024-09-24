#include <iostream>
#include <cmath>
using namespace std; 

int main() {
    double x;

    cout << "Digite um número: ";
    cin >> x;

    double raiz = sqrt(x);
    cout << "A raiz quadrada de " << x << " é " << raiz << endl;

    return 0;
}
