#include <iostream>

int main() {
    int atleta1_minutos, atleta1_segundos;
    int atleta2_minutos, atleta2_segundos;

    std::cout << "Ingrese los minutos y segundos del primer atleta (separados por espacios): ";
    std::cin >> atleta1_minutos >> atleta1_segundos;

    std::cout << "Ingrese los minutos y segundos del segundo atleta (separados por espacios): ";
    std::cin >> atleta2_minutos >> atleta2_segundos;

    int total_segundos = atleta1_minutos * 60 + atleta1_segundos + atleta2_minutos * 60 + atleta2_segundos;

    int horas = total_segundos / 3600;
    int minutos = (total_segundos % 3600) / 60;
    int segundos = total_segundos % 60;

    std::cout << "Tiempo total utilizado por ambos atletas: " << horas << " horas, " << minutos << " minutos, " << segundos << " segundos." << std::endl;

    return 0;
}
