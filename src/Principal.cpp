#include "Principal.hpp"
#include <iostream>

Principal::Principal()
{
    thiago.inicializa("Thiago", 18, 4, 2001);
    einstein.inicializa("Einstein", 14, 3, 1879);
    newton.inicializa("Newton", 4, 1, 1643);
}

void Principal::executar()
{
    thiago.calcularEImprimirIdade(26, 8, 2020);
    einstein.calcularEImprimirIdade(26, 8, 2020);
    newton.calcularEImprimirIdade(26, 8, 2020);

    std::cout << std::flush;
}