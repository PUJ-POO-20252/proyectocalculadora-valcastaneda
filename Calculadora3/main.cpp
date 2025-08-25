#include <iostream>
#include "matematicas.h"

int main() {
    int x, y;

    // Pedir datos al usuario de forma dinámica
    std::cout << "Ingrese el primer numero: ";
    std::cin >> x;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> y;

    int resultadomulti = multi(x, y);
    int resultadoDivision = division(x, y);

    std::cout << "Multiplicacion: " << resultadomulti << std::endl;
    std::cout << "Division: " << resultadoDivision << std::endl;

    return 0;
}
