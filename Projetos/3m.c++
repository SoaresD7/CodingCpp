#include <iostream>
#include <cmath>
using namespace std;

int main() {
int mes;

    
    cout << "Escolha um mês do ano:\n";
    cout << "1. Janeiro\n";
    cout << "2. Fevereiro\n";
    cout << "3. Março\n";
    cout << "4. Abril\n";
    cout << "5. Maio\n";
    cout << "6. Junho\n";
    cout << "7. Julho\n";
    cout << "8. Agosto\n";
    cout << "9. Setembro\n";
    cout << "10. Outubro\n";
    cout << "11. Novembro\n";
    cout << "12. Dezembro\n";
    cout << "Digite o número do mês de 1 a 12 : ";
    cin >> mes;

    
    if (mes == 1) {
        cout << "Janeiro tem 31 dias.\n";
    } else if (mes == 2) {
        cout << "Fevereiro tem 28 ou 29 dias, dependendo se é ano bissexto.\n";
    } else if (mes == 3) {
        cout << "Março tem 31 dias.\n";
    } else if (mes == 4) {
        cout << "Abril tem 30 dias.\n";
    } else if (mes == 5) {
        cout << "Maio tem 31 dias.\n";
    } else if (mes == 6) {
        cout << "Junho tem 30 dias.\n";
    } else if (mes == 7) {
        cout << "Julho tem 31 dias.\n";
    } else if (mes == 8) {
        cout << "Agosto tem 31 dias.\n";
    } else if (mes == 9) {
        cout << "Setembro tem 30 dias.\n";
    } else if (mes == 10) {
        cout << "Outubro tem 31 dias.\n";
    } else if (mes == 11) {
        cout << "Novembro tem 30 dias.\n";
    } else if (mes == 12) {
        cout << "Dezembro tem 31 dias.\n";
    } else {
        cout << "Mês inválido. Por favor, digite um número entre 1 e 12.\n";
    }

    return 0;
}
