#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int x, y;
    
    cout << "O senhor deseja comprar um carro novo? (digite 1 para sim e 0 para não.";
    cin >> x;
    
      if (x == 1){
         cout << "Sim, eu desejo";
     } else if (x == 0){
         cout << "Deixe para a proxima então"  ;
     }
     
     cout << "O senhor te o dinheiro necessario? (digite 1 para sim e 0 para não" ;
     cin >> y;
     
     if (y == 1){
         cout << "Parabéns, você pode comprar um carro novo" ;
     } else if  (y == 0) {
         cout << "Ah,que pena";
     }
     
     
     return 0;
     
}