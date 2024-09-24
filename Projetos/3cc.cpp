#include <iostream>

int main() {
    float lado1, lado2, lado3;


    std::cout << "Digite o comprimento do primeiro lado: ";
    std::cin >> lado1;
    std::cout << "Digite o comprimento do segundo lado: ";
    std::cin >> lado2;
    std::cout << "Digite o comprimento do terceiro lado: ";
    std::cin >> lado3;


    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 + lado3 > lado1) {
  
        if (lado1 == lado2 && lado2 == lado3) {
            std::cout << "O triangulo e equilátero." << std::endl;
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            std::cout << "O triangulo e isósceles." << std::endl;
        } else {
            std::cout << "O triangulo e escaleno." << std::endl;
        }
    } else {
        std::cout << "Os lados fornecidos não formam um triângulo válido." << std::endl;
    }

    return 0;
}
