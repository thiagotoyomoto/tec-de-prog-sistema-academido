#include "Pessoa.hpp"

Pessoa::Pessoa(int diaDeNascimento, int mesDeNascimento, int anoDeNascimento)
{
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

int Pessoa::informarIdade()
{
    return idade;
}