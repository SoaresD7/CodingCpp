#include <iostream>
#include <string>
using namespace std;

int main(){
	string resposta;
	
	cout << "Voce deseja comprar o produto ? (sim/s)" << "\n";
	cin >> resposta;
	
	if(resposta == "sim" or resposta == "s" ){
		cout << "Obrigado pela compra!";
		
	} else {
		cout << "Voce optou por nao comprar o produto.";
	}
	return 0; 
	
}