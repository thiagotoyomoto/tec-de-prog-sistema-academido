#include <stdio.h>

struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;
};

int calcularIdade(struct Pessoa pessoa, int anoAtual)
{
    return anoAtual - pessoa.idade;
}

int main()
{
    struct Pessoa einstein = {14, 3, 1879, 0}, newton = {4, 1, 1643, 0};

    einstein.idade = calcularIdade(einstein, 2020);
    newton.idade   = calcularIdade(newton, 2020);

    printf("A idade de Einstein seria: %d\n", einstein.idade);
    printf("A idade de Newton seria: %d\n", newton.idade);

    return 0;
}
