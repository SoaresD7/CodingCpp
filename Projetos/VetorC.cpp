#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
   
    vector<int> vetor;  
    vetor.push_back(1); 
    vetor.push_back(2);
    vetor.push_back(3);
    vetor.push_back(4);
    vetor.push_back(5);

    
    int maior_valor = *max_element(vetor.begin(), vetor.end());

    // Exibe o maior valor
    cout << "O maior valor no vetor é: " << maior_valor << endl;

    return 0;
}
