#include <iostream>
using namespace std;

int main (){
	
	int n , numero , maior;
	
	cout << "Quantos numeros voce deseja inserir?" << "\n";
	cin >> n;
	if (n == 0){
	return 0; // encerra o programa se 'n' for igual a 0.

}else{
cout << "Digite o primeiro numero:" << "\n";
	cin >> numero;
	maior = numero; // inicializa 'maior' com o primeiro numero 
	}
	for ( int i = 1; i < n; i++){
	
	cout << "Digite o proximo numero";
	cin >> numero;
	
	if  (numero > maior){
			maior = numero; // atualiza 'maior' se 'numero' for maior 
			
		}
	}
	cout << "O maior numero inserido foi: " << maior << "\n";

}