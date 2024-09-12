#include <iostream>
#include <cmath>
using namespace std;

int main(){

double n1, n2, n3, media, peso1, peso2, peso3;

cout << "Digite sua primira nota :";
cin >> n1;

cout << "Qual o peso da primera nota: ";
cin >> peso1;

cout << "Digite sua segunda nota :";
cin >> n2;

cout << "Digite o peso da segunda nota :";
cin >> peso2;

cout << "Digite sua terceira nota :";
cin >> n3;

cout << "Digite o peso da terceira nota :";
cin >> peso3;

media = (n1 * peso1 + n2 * peso2 + n3 * peso3) / (peso1 + peso2 + peso3);

cout << "A média ponderada é :" << media;

}
