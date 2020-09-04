#include "Aluno.hpp"

Aluno::Aluno(const char* nome, int diaDeNascimento, int mesDeNascimento,
             int anoDeNascimento) :
    Pessoa(nome, diaDeNascimento, mesDeNascimento, anoDeNascimento)
{
}

Aluno::~Aluno() { }

int Aluno::obterRA()
{
    return ra;
}

void Aluno::atribuirRA(int valor)
{
    ra = valor;
}