#include "Pessoa.hpp"
#include <stdio.h>
#include <string.h>

Pessoa::Pessoa(const char* nome, int diaDeNascimento, int mesDeNascimento,
               int anoDeNascimento)
{
    strcpy(this->nome, nome);
    dia   = diaDeNascimento;
    mes   = mesDeNascimento;
    ano   = anoDeNascimento;
    idade = -1;
}

void Pessoa::calcularIdade(int diaAtual, int mesAtual, int anoAtual)
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

void Pessoa::imprimirIdade()
{
    printf("A idade de %s eh/seria: %d\n", nome, idade);
}

void Pessoa::calcularEImprimirIdade(int diaAtual, int mesAtual, int anoAtual)
{
    calcularIdade(diaAtual, mesAtual, anoAtual);
    imprimirIdade();
}

int Pessoa::informarIdade()
{
    return idade;
}