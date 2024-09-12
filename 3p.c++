#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int x, y;
    
    cout << "O senhor tem um diploma de ensino superior? (digite 1 para sim e 0 para não.";
    cin >> x;
    
      if (x == 1){
         cout << "Sim, eu tenho";
     } else if (x == 0){
         cout << "Não, não tenho";
     }
     
     cout << "O senhor te mais de 21 anos? (digite 1 para sim e 0 para não" ;
     cin >> y;
     
     if (y == 1){
         cout << "Parabéns, você esta qualificado para a vaga" ;
     } else if  (y == 0) {
         cout << "Ah,que pena";
     }
     
     
     return 0;
     
}