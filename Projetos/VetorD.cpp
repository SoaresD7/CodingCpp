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

    cout << "O menor valor no vetor é: " << *min_element(vetor.begin(), vetor.end()) << endl;
    return 0;
}

