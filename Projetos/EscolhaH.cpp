#include <iostream>
using namespace std;


int main(){
    
   int idioma;
   
   cout << "Escolha o idioma de sua preferencia : ( 1 Português ou 2 Inglês ) " << endl;
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
