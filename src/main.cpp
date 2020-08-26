#include "Pessoa.hpp"
#include <iostream>

int main()
{
    // Quando não necessitar passar algum parâmetro para o objeto que está sendo
    // instanciado, não é necessário o uso dos parênteses.
    Pessoa ninguem, eu("Thiago", 18, 4, 2001),
        einstein("Einstein", 14, 3, 1879), newton("Newton", 4, 1, 1643);

    ninguem.calcularEImprimirIdade(26, 8, 2020);
    eu.calcularEImprimirIdade(26, 8, 2020);
    einstein.calcularEImprimirIdade(26, 8, 2020);
    newton.calcularEImprimirIdade(26, 8, 2020);

    // Utilizar sempre o std::endl é custoso, então utilizar o '\n' para que
    // seja liberado o buffer todo de uma vez.
    std::cout << std::flush;

    return 0;
}
