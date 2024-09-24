#include <iostream>
using namespace std;

int main() {
	int n1;
	cout << "Digite um número: " << endl;
	cin >> n1;
	
	int soma = 0;
    for (int i = 1; i <= n1; i++) {
    soma += i;

    }
    
    cout << "A soma de todos os números entre 1 e " << n1 << " é: " << soma << endl;

    return 0;
}
