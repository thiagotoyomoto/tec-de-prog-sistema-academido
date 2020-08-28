#ifndef DC63510F_9A97_489B_B0D1_53034A915F5E
#define DC63510F_9A97_489B_B0D1_53034A915F5E

#include "Pessoa.hpp"
#include "src/Universidade.hpp"

class Principal
{
  private:
    Pessoa joao;
    Pessoa thiago;
    Pessoa einstein;
    Pessoa newton;

    Universidade UTFPR;
    Universidade princeton;
    Universidade cambridge;

    int diaAtual;
    int mesAtual;
    int anoAtual;

  public:
    Principal();
    void executar();
};

#endif /* DC63510F_9A97_489B_B0D1_53034A915F5E */