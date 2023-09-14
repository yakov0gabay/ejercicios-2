#include <iostream>

int main() {
    double pies, metros;

    std::cout << "Ingrese la cantidad en pies: ";
    std::cin >> pies;

    std::cout << "Ingrese la cantidad en metros: ";
    std::cin >> metros;

    double suma_pies = pies + metros * 3.28084;
    double pulgadas = suma_pies * 12.0;
    double yardas = suma_pies / 3.0;
    double metros_resultado = suma_pies / 3.28084;
    double millas = suma_pies / 5280.0;

    std::cout << "Suma en pulgadas: " << pulgadas << " pulgadas" << std::endl;
    std::cout << "Suma en yardas: " << yardas << " yardas" << std::endl;
    std::cout << "Suma en metros: " << metros_resultado << " metros" << std::endl;
    std::cout << "Suma en millas: " << millas << " millas" << std::endl;

    return 0;
}
