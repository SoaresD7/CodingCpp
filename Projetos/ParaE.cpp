#include <iostream>
using namespace std;

int main(){
	int numero;
	bool nPrimo = true;
	
	cout << "Digite um numero inteiro:" << "\n";
	cin >> numero;
	
	if (numero <= 1){
		nPrimo = false;
	}else {
		for (int i = 2; i <= numero / 2; i++){
			if (numero % i == 0){
				nPrimo = false;
				break;
				
			}
		}
	}
	
	
	if (nPrimo){
		cout << numero << "E um numero primo." << "\n";
	}else{
		cout << numero << "Nao e um numero primo." << "\n";
	}
	return 0;
	
	
	
}