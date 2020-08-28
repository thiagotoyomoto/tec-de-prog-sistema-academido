#ifndef C7C9DF9F_7322_46C4_AA16_4236189C7FE6
#define C7C9DF9F_7322_46C4_AA16_4236189C7FE6

#include "Departamento.hpp"

class Universidade
{
  private:
    char          nome[80];
    Departamento* departamento;

  public:
    Universidade(const char* nome = "");
    ~Universidade();

    void  atribuirNome(const char* nome);
    char* obterNome();

    void          atribuirDepartamento(Departamento* departamento);
    Departamento* obterDepartamento();
};

#endif /* C7C9DF9F_7322_46C4_AA16_4236189C7FE6 */