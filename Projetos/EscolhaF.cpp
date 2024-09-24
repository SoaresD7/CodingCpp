#include<iostream>
using namespace std;

int main(){
	int resposta;
	
	cout << "Digite o numero conforme o tamanho da camiseta que deseja: 1 - CAMISETA P    2 - CAMISETA M    3 - CAMISETA G " "\n";
	cin >> resposta;
	switch(resposta){
		case 1:
			cout << "Camiseta de tamanho P confirmada!";
			break;
			case 2:
				cout << "Camiseta de tamanho M confirmada!";
				break;
				case 3 :
					cout << "Camiseta de tamanho G confirmada!";
					
			
	}
}