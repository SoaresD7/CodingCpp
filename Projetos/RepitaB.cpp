#include <iostream>
using namespace std;

int main() {
    int n1;

    cout << "Insira um n�mero inteiro: ";
    cin >> n1;

    int i = 1;

    cout << "Tabuada de " << n1 << " at� 10:" << endl;

    do {
        cout << n1 << " x " << i << " = " << n1 * i << endl;
        i++; 
    } while (i <= 10);

    return 0;
}
