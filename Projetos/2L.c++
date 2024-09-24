#include <iostream>
#include <cmath>
using namespace std;

int main(){

double peso, altura;

cout << "Digite seu peso : ";
cin >> peso;

cout << "Digite sua altura : ";
cin >> altura;

double IMC = peso / (altura * altura);

cout << "Seu Índice de Massa Corporal é : " << IMC;

}

