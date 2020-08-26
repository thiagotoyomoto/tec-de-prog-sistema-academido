#include <stdio.h>

struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;

    void calcularIdade(int diaAtual, int mesAtual, int anoAtual)
    {
        idade = anoAtual - ano;

        if(mes < mesAtual)
        {
            idade -= 1;
        }
        else if(mes == mesAtual)
        {
            if(dia < diaAtual)
            {
                idade -= 1;
            }
        }
    }
};

int main()
{
    struct Pessoa einstein = {14, 3, 1879, 0}, newton = {4, 1, 1643, 0};

    einstein.calcularIdade(26, 8, 2020);
    newton.calcularIdade(26, 8, 2020);

    printf("A idade de Einstein seria: %d\n", einstein.idade);
    printf("A idade de Newton seria: %d\n", newton.idade);

    return 0;
}
