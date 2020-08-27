#include "Principal.hpp"
#include <ctime>
#include <iostream>

Principal::Principal()
{
    thiago.inicializa("Thiago", 18, 4, 2001);
    einstein.inicializa("Einstein", 14, 3, 1879);
    newton.inicializa("Newton", 4, 1, 1643);

    std::time_t t     = time(0);
    struct tm*  local = std::localtime(&t);
    diaAtual          = local->tm_mday;
    mesAtual          = local->tm_mon + 1;
    anoAtual          = local->tm_year + 1900;

    executar();
}

void Principal::executar()
{
    thiago.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    einstein.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    newton.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);

    std::cout << std::flush;
}