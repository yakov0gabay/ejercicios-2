#include <iostream>

int main() {
    double numero1, numero2;
    char operacion;

    std::cout << "Ingrese el primer número: ";
    std::cin >> numero1;

    std::cout << "Ingrese el segundo número: ";
    std::cin >> numero2;

    std::cout << "Elija la operación a realizar (+ para suma, - para resta, * para multiplicación, / para división): ";
    std::cin >> operacion;

    double resultado;

    switch (operacion) {
        case '+':
            resultado = numero1 + numero2;
            break;
        case '-':
            resultado = numero1 - numero2;
            break;
        case '*':
            resultado = numero1 * numero2;
            break;
        case '/':
            if (numero2 != 0) {
                resultado = numero1 / numero2;
            } else {
                std::cout << "Error: No se puede dividir por cero." << std::endl;
                return 1; // Salir del programa con un código de error
            }
            break;
        default:
            std::cout << "Operación no válida." << std::endl;
            return 1; // Salir del programa con un código de error
    }

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}
