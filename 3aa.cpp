#include <iostream>
#include <string>

using namespace std;



int main(){
string palavra;


cout << "Escreva uma palvra" << "\n";
getline (cin, palavra);

if (!palavra.empty()){
	cout << "A palavra nao e vazia.";
	
} else {
	cout << "A palavra e vazia";
	
}
return 0;
}