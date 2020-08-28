#include "Universidade.hpp"
#include <cstring>

Universidade::Universidade(const char* nome) : departamento(nullptr)
{
    std::strcpy(this->nome, nome);
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

void Universidade::atribuirDepartamento(Departamento* departamento)
{
    this->departamento = departamento;
}

Departamento* Universidade::obterDepartamento()
{
    return departamento;
}
