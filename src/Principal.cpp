#include "Principal.hpp"
#include <iostream>

Principal::Principal()
{
    thiago.inicializa("Thiago", 18, 4, 2001);
    einstein.inicializa("Einstein", 14, 3, 1879);
    newton.inicializa("Newton", 4, 1, 1643);

    executar();
}

void Principal::executar()
{
    int diaAtual, mesAtual, anoAtual;

    std::cout << "Informe o dia atual: ";
    std::cin >> diaAtual;

    std::cout << "Informe o mes atual: ";
    std::cin >> mesAtual;

    std::cout << "Informe o ano atual: ";
    std::cin >> anoAtual;

    std::cout << '\n';

    thiago.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    einstein.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    newton.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);

    std::cout << std::flush;
}