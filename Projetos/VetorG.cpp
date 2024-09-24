#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main (){
	
	string nomes[5];
	
	//entrada dos nomes
	for(int i = 0; i < 5; i++){
		cout << "Digite o nome" << i + 1 << ":";
		getline( cin, nomes[i]);
		//imprime a listagem dos nomes
		cout << "\n Listagem dos nomes ordenados: \n";
		for (int i = 0; i < 5 ; i++)
		cout << i + 1 << "." << nomes[i] << "\n";
		
	}
	return 0;
	
	
	
}