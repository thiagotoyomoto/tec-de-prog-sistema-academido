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

void Universidade::adicionarDepartamento(Departamento* departamento)
{
    departamentos.push_back(departamento);
}

void Universidade::imprimirTodosOsDepartamentos()
{
    if(departamentos.size() == 0)
    {
        std::cout << "A " << nome
                  << " nao tem nenhum departamento registrado.\n";
        return;
    }

    std::cout << "Departamentos da " << nome << ":\n";
    for(auto& departamento: departamentos)
    {
        std::cout << "  " << departamento->obterNome() << '\n';
    }
}
