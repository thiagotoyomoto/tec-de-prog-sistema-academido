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

void Pessoa::atribuirUniversidadeFiliado(Universidade* universidade)
{
    universidadeFiliado = universidade;
}

void Pessoa::imprimirUniversidadeFiliado()
{
    if(universidadeFiliado != nullptr)
    {
        std::cout << nome << " eh/foi filiado a "
                  << universidadeFiliado->obterNome() << ".\n";
    }
    else
    {
        std::cout << nome << " nao eh/era filiado a nenhuma universidade.\n";
    }
}

void Pessoa::atribuirDepartamentoFiliado(Departamento* departamento)
{
    departamentoFiliado = departamento;
}

void Pessoa::imprimirDepartamentoFiliado()
{
    if(departamentoFiliado != nullptr)
    {
        std::cout << nome << " eh/foi filiado ao "
                  << departamentoFiliado->obterNome() << " da "
                  << universidadeFiliado->obterNome() << ".\n";
    }
    else
    {
        std::cout << nome << " nao eh/era filiado a nenhum departamento.\n";
    }
}