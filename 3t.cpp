#include <iostream>
using namespace std;

main(){
	int x;
	
	cout << "Digite um numero inteiro para verificar se e divisivel por 3" << "\n";
	cin >> x;
	if (x % 3 == 0 , x % 5 == 0 ){
		cout << "O numero e divisivel por 3 ou por 5" << "\n";
	} else { 
	cout << "O numero nao e divisivel por 3 ou por 5"; 
	}
	
}