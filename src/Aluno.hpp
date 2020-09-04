#ifndef E1ED7B7D_29C4_4E0A_B6F0_DCC0AA214CF8
#define E1ED7B7D_29C4_4E0A_B6F0_DCC0AA214CF8

#include "Pessoa.hpp"

class Aluno : public Pessoa
{
  private:
    int ra = 0;

  public:
    Aluno(const char* nome = "", int diaDeNascimento = 0,
          int mesDeNascimento = 0, int anoDeNascimento = 0);
    ~Aluno();

    int  obterRA();
    void atribuirRA(int valor);
};

#endif /* E1ED7B7D_29C4_4E0A_B6F0_DCC0AA214CF8 */