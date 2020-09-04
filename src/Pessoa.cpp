#include "Pessoa.hpp"
#include <iostream>
#include <string.h>

Pessoa::Pessoa(const char* nome, int diaDeNascimento, int mesDeNascimento,
               int anoDeNascimento) :
    diaDeNascimento(diaDeNascimento),
    mesDeNascimento(mesDeNascimento), anoDeNascimento(anoDeNascimento)
{
    strcpy(this->nome, nome);
}

Pessoa::~Pessoa() { }

void Pessoa::calcularIdade(int diaAtual, int mesAtual, int anoAtual)
{
    idade = anoAtual - anoDeNascimento;

    if(mesDeNascimento > mesAtual)
    {
        idade -= 1;
    }
    else if(mesDeNascimento == mesAtual)
    {
        if(diaDeNascimento > diaAtual)
        {
            idade -= 1;
        }
    }
}

void Pessoa::imprimirIdade()
{
    std::cout << "A idade de " << nome << " eh/seria: " << idade << '\n';
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