#include "Professor.hpp"
#include "Departamento.hpp"
#include "Universidade.hpp"
#include <iostream>

Professor::Professor(const char* nome, int diaDeNascimento, int mesDeNascimento,
                     int anoDeNascimento) :
    Pessoa(nome, diaDeNascimento, mesDeNascimento, anoDeNascimento)
{
}

Professor::~Professor() { }

void Professor::atribuirUniversidadeFiliado(Universidade* universidade)
{
    universidadeFiliado = universidade;
}

void Professor::imprimirUniversidadeFiliado()
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

void Professor::atribuirDepartamentoFiliado(Departamento* departamento)
{
    departamentoFiliado = departamento;
}

void Professor::imprimirDepartamentoFiliado()
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