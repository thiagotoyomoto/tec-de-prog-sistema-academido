#ifndef AC8A9613_6099_44DF_8E67_6EA39C7799FE
#define AC8A9613_6099_44DF_8E67_6EA39C7799FE

#include "Pessoa.hpp"

class Universidade;
class Departamento;

class Professor : public Pessoa
{
  private:
    Universidade* universidadeFiliado = nullptr;
    Departamento* departamentoFiliado = nullptr;

  public:
    Professor(const char* nome = "", int diaDeNascimento = 0,
              int mesDeNascimento = 0, int anoDeNascimento = 0);
    ~Professor();

    void atribuirUniversidadeFiliado(Universidade* universidade);
    void imprimirUniversidadeFiliado();

    void atribuirDepartamentoFiliado(Departamento* departamento);
    void imprimirDepartamentoFiliado();
};

#endif /* AC8A9613_6099_44DF_8E67_6EA39C7799FE */