#ifndef C7C9DF9F_7322_46C4_AA16_4236189C7FE6
#define C7C9DF9F_7322_46C4_AA16_4236189C7FE6

#include <list>

class Departamento;

class Universidade
{
  private:
    char          nome[80]                  = "";
    std::list<Departamento*> departamentos;

  public:
    Universidade(const char* nome = "");
    ~Universidade();

    void  atribuirNome(const char* nome);
    char* obterNome();

    void adicionarDepartamento(Departamento* departamento);
    void imprimirTodosOsDepartamentos();
};

#endif /* C7C9DF9F_7322_46C4_AA16_4236189C7FE6 */