#include "Departamento.hpp"
#include "Universidade.hpp"
#include <cstring>
#include <iostream>

Departamento::Departamento(const char* nome)
{
    std::strcpy(this->nome, nome);
}

Departamento::~Departamento() { }

void Departamento::atribuirNome(const char* valor)
{
    std::strcpy(nome, valor);
}

char* Departamento::obterNome()
{
    return nome;
}

void Departamento::registrarNaUniversidade(Universidade* valor) {
    universidadeRegistrada = valor;
}

void Departamento::imprimirUniversidadeRegistrada() {
    if(!universidadeRegistrada) {
        std::cout << "O " << nome << " nao esta registrado em uma universidade.\n";
        return;
    }
    std::cout << "O " << nome << " esta registrado na " << universidadeRegistrada->obterNome() << ".\n";
}
