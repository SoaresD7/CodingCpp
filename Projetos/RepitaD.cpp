#include<iostream>
#include<string>
using namespace std;

int main(){
	
string senhaInserida;
string senhaCorreta = "123"; // define a senha correta 
int tentativas = 0;
bool sucesso = false;
    
    while(tentativas < 3 && !sucesso ){
    	cout << "Digite a senha:" << "\n";
    	cin >> senhaInserida;
    	
    	if (senhaInserida == senhaCorreta) {
    		sucesso = true;
    		cout << "Senha correta! Acesso liberado!" << "\n";
    		
		}else {
			tentativas++;
			cout << "Senha incorreta! Tente novamente!" << "\t" << "Tentativas restantes (3)" << "\n";
			
		}
	}
	if (!sucesso) {
		cout << "Numero de tentativas maximas atingido. Acesso negado!" << "\n";
	}
	return 0; 



	
	
	 	}
	      
		
	
	

		
		
		
				

	
	
	
	
	
	
