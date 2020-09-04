#include "Universidade.hpp"
#include "Departamento.hpp"
#include <cstring>
#include <iostream>

Universidade::Universidade(const char* nome)
{
    std::strcpy(this->nome, nome);
    for(auto& departamento: departamentos)
    {
        departamento = nullptr;
    }
}

Universidade::~Universidade() { }

void Universidade::atribuirNome(const char* nome)
{
    std::strcpy(this->nome, nome);
}

char* Universidade::obterNome()
{
    return nome;
}

void Universidade::adicionarDepartamento(int indice, Departamento* departamento)
{
    if(indice < 0 || indice >= 50)
    {
        return;
    }

    if(!departamentos[indice])
    {
        ++quantidadeDeDepartamentos;
    }
    departamentos[indice] = departamento;
}

void Universidade::imprimirTodosOsDepartamentos()
{
    if(quantidadeDeDepartamentos == 0)
    {
        std::cout << "A " << nome
                  << " nao tem nenhum departamento registrado.\n";
        return;
    }

    std::cout << "Departamentos da " << nome << ":\n";
    for(auto& departamento: departamentos)
    {
        if(departamento)
        {
            std::cout << "  " << departamento->obterNome() << '\n';
        }
    }
}
