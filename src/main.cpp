#include "Pessoa.hpp"
#include <stdio.h>

int main()
{
    Pessoa einstein("Einstein", 14, 3, 1879), newton("Newton", 4, 1, 1643);

    einstein.calcularEImprimirIdade(26, 8, 2020);
    newton.calcularEImprimirIdade(26, 8, 2020);

    return 0;
}
