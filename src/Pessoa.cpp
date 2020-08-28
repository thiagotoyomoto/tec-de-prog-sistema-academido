#include "Pessoa.hpp"
#include <iostream>
#include <string.h>

Pessoa::Pessoa(const char* nome, int diaDeNascimento, int mesDeNascimento,
               int anoDeNascimento)
{
    strcpy(this->nome, nome);
    this->diaDeNascimento = diaDeNascimento;
    this->mesDeNascimento = mesDeNascimento;
    this->anoDeNascimento = anoDeNascimento;
    idade                 = -1;

    universidadeFiliado = nullptr;
}

void Pessoa::inicializa(const char* nome, int diaDeNascimento,
                        int mesDeNascimento, int anoDeNascimento)
{
    strcpy(this->nome, nome);
    this->diaDeNascimento = diaDeNascimento;
    this->mesDeNascimento = mesDeNascimento;
    this->anoDeNascimento = anoDeNascimento;
    idade                 = -1;

    universidadeFiliado = nullptr;
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
        std::cout << nome << " eh filiado a "
                  << universidadeFiliado->obterNome() << '\n';
    }
    else
    {
        std::cout << nome << " nao eh filiado a nenhuma universidade.\n";
    }
}