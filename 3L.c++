#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    int num1, num2;

    
    cout << "Digite o primeiro número : ";
    cin >> num1;

    cout << "Digite o segundo número : ";
    cin >> num2;

    
    int diferenca = (num1 - num2);

    
    if (diferenca <= 10) {
        cout << "A diferença entre os números é menor ou igual a 10." << endl;
    } else {
        cout << "A diferença entre os números é maior que 10." << endl;
    }

    return 0;
}
