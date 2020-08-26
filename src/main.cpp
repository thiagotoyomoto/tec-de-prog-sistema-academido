#include "Pessoa.hpp"
#include <iostream>

int main()
{
    // Quando não necessitar passar algum parâmetro para o objeto que está sendo
    // instanciado, não é necessário o uso dos parênteses.
    Pessoa ninguem, eu("Thiago", 18, 4, 2001),
        einstein("Einstein", 14, 3, 1879), newton("Newton", 4, 1, 1643);

    int diaAtual, mesAtual, anoAtual;

    std::cout << "Informe o dia atual: ";
    std::cin >> diaAtual;

    std::cout << "Informe o mes atual: ";
    std::cin >> mesAtual;

    std::cout << "Informe o ano atual: ";
    std::cin >> anoAtual;

    std::cout << '\n';

    ninguem.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    eu.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    einstein.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    newton.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);

    // Utilizar sempre o std::endl é custoso, então utilizar o '\n' para que
    // seja liberado o buffer todo de uma vez.
    std::cout << std::flush;

    return 0;
}
