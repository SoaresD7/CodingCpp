#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	
	int arr[] = {5, 2, 9, 1, 5, 6};
	int n = sizeof(arr) / sizeof(arr[0]);
	
	sort(arr, arr + n);
	
	//exibindo os valores do vetor em ordem decrescente
	cout << "Vetor ordenado em ordem crescente: ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << "";
		
	}
	cout << "\n";
	return 0;
}