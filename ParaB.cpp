#include <iostream>
using namespace std;

int main() {
	int n1;
	cout << "Digite um n�mero: " << endl;
	cin >> n1;
    for (int i = 0; i <= n1; i = i + 2) {
        cout << i << endl;
    }
    return 0;
}
