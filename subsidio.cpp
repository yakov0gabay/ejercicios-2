#include <iostream>

int main() {
    int numero_hijos, edad_hijos;
    char estado_civil;

    std::cout << "Ingrese el número de hijos: ";
    std::cin >> numero_hijos;

    std::cout << "Ingrese la edad del primer hijo: ";
    std::cin >> edad_hijos;

    std::cout << "Ingrese el estado civil de la madre (casada: 'C', viuda: 'V'): ";
    std::cin >> estado_civil;

    double monto_mensual = 0.0;

    if (numero_hijos <= 2) {
        monto_mensual += 70.00;
    } else if (numero_hijos <= 5) {
        monto_mensual += 90.00;
    } else {
        monto_mensual += 120.00;
    }

    if (edad_hijos >= 6 && edad_hijos <= 18) {
        monto_mensual += 10.00 * (edad_hijos - 5); // 10.00 por cada hijo en edad escolar
    }

    if (estado_civil == 'V' || estado_civil == 'v') {
        monto_mensual += 20.00; // Viuda
    }

    std::cout << "El monto mensual que recibirá la familia es: S/. " << monto_mensual << std::endl;

    return 0;
}
