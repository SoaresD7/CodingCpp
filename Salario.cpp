#include <iostream>
using namespace std;

int main() {
    double Hora, HorasTrabalhadas, SalarioBruto, ImpostoRenda, INSS, FGTS, Descontos, SalarioLiquido;
    
    cout << "Digite o valor da sua hora de trabalho: " << endl;
    cin >> Hora;
    cout << "Digite quantas horas você trabalhou no mês: " << endl;
    cin >> HorasTrabalhadas;

    SalarioBruto = Hora * HorasTrabalhadas;
    
    if (SalarioBruto <= 900) {
        ImpostoRenda = 0;
    } else if (SalarioBruto <= 1500) {
        ImpostoRenda = SalarioBruto * 0.05;  
    } else if (SalarioBruto <= 2500) {
        ImpostoRenda = SalarioBruto * 0.10;  
    } else {
        ImpostoRenda = SalarioBruto * 0.20;  
    }

    INSS = SalarioBruto * 0.10;

	FGTS = SalarioBruto * 0.11;

    Descontos = ImpostoRenda + INSS;

    SalarioLiquido = SalarioBruto - Descontos;

 
    cout << "Salário Bruto: (" << Hora << " * " << HorasTrabalhadas << ") : R$ " << SalarioBruto << endl;
    cout << "(-) IR: R$ " << ImpostoRenda << endl;
    cout << "(-) INSS (10%): R$ " << INSS << endl;
    cout << "FGTS (11%): R$ " << FGTS << endl;
    cout << "Total de descontos: R$ " << Descontos << endl;
    cout << "Salário Líquido: R$ " << SalarioLiquido << endl;

    return 0;
}
