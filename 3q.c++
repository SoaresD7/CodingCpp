#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int x, y;
    
    cout << "O senhor é assinante da Amazom Prime? (digite 1 para sim e 0 para não.";
    cin >> x;
    
      if (x == 1){
         cout << "Sim, para as duas perguntas";
     } else if (x == 0){
         cout << "Ok,obrigado";
     }
     
     cout << "O senhor ja assistiu The Boys? (digite 1 para sim e 0 para não" ;
     cin >> y;
     
     if (y == 1){
         cout << "Ótimo,agora você pode assistir a nova temporada" ;
     } else if  (y == 0) {
         cout << "Ah,que pena";
     }
     
     
     return 0;
     
}