#include <iostream>
#include "matematicas.h"

int main() {
    int x = 10;
    int y = 4;
    int resultadomulti = multi(x,y);
    int resultadoDivision = division(x,y);

    std::cout <<"Multiplicacion: " << resultadomulti << std::endl;
    std::cout <<"Division: " << resultadoDivision << std::endl;
    return 0;
}