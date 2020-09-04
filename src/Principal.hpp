#ifndef DC63510F_9A97_489B_B0D1_53034A915F5E
#define DC63510F_9A97_489B_B0D1_53034A915F5E

#include "Pessoa.hpp"
#include "Universidade.hpp"

class Principal
{
  private:
    Pessoa einstein;
    Pessoa joao;
    Pessoa newton;
    Pessoa thiago;

    Universidade cambridge;
    Universidade harvard;
    Universidade princeton;
    Universidade utfpr;
    Universidade yale;

    Departamento departamentoDeAstrologia;
    Departamento departamentoDeComputacao;
    Departamento departamentoDeFisica;
    Departamento departamentoDeMatematica;
    Departamento departamentoDeQuimica;

    int diaAtual;
    int mesAtual;
    int anoAtual;

  public:
    Principal();
    void executar();
};

#endif /* DC63510F_9A97_489B_B0D1_53034A915F5E */