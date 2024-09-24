#include <iostream>
using namespace std;

int main(){
	
	int n, numero, soma = 0, contador = 0;
	cout << "Quantos numeros voce deseja inserir?" << "\n";
	cin >> n;
	
	while (contador < n ){
		cout << "Digite um numero" << "\n";
		cin >> numero;
		soma += numero; // adiciona o numero a soma
	    contador++; // incrementa o contador
	    }
	    cout << "A soma dos numeros inseridos e:" << soma << "\n";
	    
	
}