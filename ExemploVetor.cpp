#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declaração de um vetor de inteiros
    vector<int> meuVetor;

    // Adicionando elementos
    meuVetor.push_back(10);
    meuVetor.push_back(20);
    meuVetor.push_back(30);

    // Acessando e imprimindo os elementos
    for (size_t i = 0; i < meuVetor.size(); i++) {
        cout << meuVetor[i] << endl;

    }

 

    // Imprimindo o tamanho e a capacidade do vetor
    cout << "Tamanho: " << meuVetor.size() << endl;
    cout << "Capacidade: " << meuVetor.capacity() << endl;

    return 0;
}
