#include "Departamento.hpp"
#include "Universidade.hpp"
#include <cstring>

Departamento::Departamento(const char* nome)
{
    std::strcpy(this->nome, nome);
}

Departamento::~Departamento() { }

void Departamento::atribuirNome(const char* nome)
{
    std::strcpy(this->nome, nome);
}

char* Departamento::obterNome()
{
    return nome;
}

void Departamento::registrarNaUniversidade(Universidade* universidade) { }

void Departamento::imprimirUniversidadeRegistrada() { }
