#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int x, y;
    
    cout << "Você tem carteira de motorista?";
    cin >> x;
    
      if (x == 1){
         cout << "Você pode dirigir";
     } else if (x == 0){
         cout << "Você não pode dirigir";
     }
     
     cout << "Você tem que idade?";
     cin >> y;
     
     if (y >= 18){
         cout << "Você tem idade para dirigir";
     } else { 
         cout << "Você não tem idade para dirigir";
     }
     
     
     return 0;
     
}