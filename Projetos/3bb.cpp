#include <iostream>
#include <string>
using namespace std;

int main (){
	string resposta;
	
	cout << "Voce nao deseja cancelar a operacao?" << "\n";
	cin >> resposta;
	
	if (resposta == "nao" or resposta == "n"){
		cout << "Por favor, confirme o cancelamento da operacao";
	
	} else {
		cout << "Operacao prosseguira";
		
	}
}