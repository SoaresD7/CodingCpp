#include <iostream>
using namespace std;

int main(){
	
	for ( int i = 5; i <= 10; i++){ // laço para os numeros de 5 ate o 10
		cout << "Tabuada do " << i << ":" << "\n";
		for (int j = 1; j <= 10; ++j){ // laço para os multiplicadores 
			cout << i << "x" << j << "=" << i *j << "\n";
		}
		cout << "\n"; // separar as tabuadas 
	}
	return 0;
}