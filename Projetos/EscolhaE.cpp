#include <iostream>
using namespace std;
int main (){
	int resposta;
	
	cout << "Digite o numero conforme a velocidade que deseja: [1 (BAIXA) - 30km/h      2 (MEDIA) - 60km/h      3 (ALTA) - 90km/h]" "\n";
	
	cin >> resposta;
	switch(resposta){
		case 1:
			cout << "Velocidade autorizada! O limite de velocidade da via e de 60km/h.";
			break;
			case 2:
				cout << "Velocidade autorizada! O limite de velocidade da via e de 60km/h.";
				break;
				case 3:
					cout << "Velocidade negada, por favor reduza! O limite de velocidade da via e de 60km/h.";
	} 
	
	
}
