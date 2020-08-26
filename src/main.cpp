#include "Pessoa.hpp"
#include <stdio.h>

int main()
{
    Pessoa einstein(14, 3, 1879), newton(4, 1, 1643);

    einstein.calcularIdade(26, 8, 2020);
    newton.calcularIdade(26, 8, 2020);

    printf("A idade de Einstein seria: %d\n", einstein.idade);
    printf("A idade de Newton seria: %d\n", newton.idade);

    return 0;
}
