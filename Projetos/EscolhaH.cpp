#include <iostream>
using namespace std;


int main(){
    
   int idioma;
   
   cout << "Escolha o idioma de sua preferencia : ( 1 Portugu�s ou 2 Ingl�s ) " << endl;
   cin >> idioma;
   
   
   switch (idioma) {
       
       case 1:
       cout << "Boas-Vindas";
       break;
       
       case 2:
       cout << "Welcome";
       break;
       
       
   }
}
