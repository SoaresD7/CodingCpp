#include <iostream>
#include <iomanip> 
int main() {
    
    double precoProduto;
    double descontoPorcentagem;
    double precoFinal;

   
    std::cout << "Digite o preço do produto: R$ ";
    std::cin >> precoProduto;

  
    std::cout << "Digite o desconto em porcentagem: ";
    std::cin >> descontoPorcentagem;

    
    precoFinal = precoProduto - (precoProduto * descontoPorcentagem / 100);

   
    std::cout << std::fixed << std::setprecision(2); 
    std::cout << "O preço final com desconto é: R$ " << precoFinal << std::endl;

    return 0;
}
