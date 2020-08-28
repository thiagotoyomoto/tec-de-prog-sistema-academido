#include "Universidade.hpp"
#include <cstring>

Universidade::Universidade(const char* nome)
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