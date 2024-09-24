#include <iostream>
using namespace std;

int main() {
    const int NUM_MERCADORIAS = 100; 
    double precoCompra, precoVenda; 
    int lucroMenor10 = 0, lucroEntre10e20 = 0, lucroMaior20 = 0; 

    
    for (int i = 0; i < NUM_MERCADORIAS; i++) {
        cout << "Digite o preço de compra da mercadoria " << (i + 1) << ": ";
        cin >> precoCompra;
        cout << "Digite o preço de venda da mercadoria " << (i + 1) << ": ";
        cin >> precoVenda;

        
        double lucroPercentual = ((precoVenda - precoCompra) / precoCompra) * 100;

        
        if (lucroPercentual < 10) {
            lucroMenor10++;
        } else if (lucroPercentual <= 20) {
            lucroEntre10e20++;
        } else {
            lucroMaior20++;
        }
    }

    
    cout << "Quantidade de mercadorias com lucro < 10%: " << lucroMenor10 << endl;
    cout << "Quantidade de mercadorias com 10% <= lucro <= 20%: " << lucroEntre10e20 << endl;
    cout << "Quantidade de mercadorias com lucro > 20%: " << lucroMaior20 << endl;

    return 0;
}
