#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    vector <double> meuVetor;
    
    double n1, n2, n3, n4, n5;
    
    cout << "Digite o primeiro valor do seu vetor: " << endl;
    cin >> n1;
    cout << "Digite o segundo valor do seu vetor: " << endl;
    cin >> n2;
	cout << "Digite o terceiro valor do seu vetor: " << endl;
    cin >> n3;
	cout << "Digite o quarto valor do seu vetor: " << endl;
    cin >> n4;
	cout << "Digite o quinto valor do seu vetor: " << endl;
    cin >> n5;
    
    meuVetor.push_back(n1);
    meuVetor.push_back(n2);
    meuVetor.push_back(n3);
    meuVetor.push_back(n4);
    meuVetor.push_back(n5);
    
    cout << "Os valores do seu vetor são: " << endl;
    for (int i = 0; i < meuVetor.size(); i++) {
        cout << meuVetor[i] << " ";
        
        cout << endl;
    }
    
    double media = n1 + n2 + n3 + n4 + n5;
    cout << "A média dos seus números é: " << media / 5 << endl;

    return 0;
}
