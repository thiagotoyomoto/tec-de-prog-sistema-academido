#ifndef A8B433A2_D930_4112_B80D_0B4DC7356B65
#define A8B433A2_D930_4112_B80D_0B4DC7356B65

class Universidade;

class Departamento
{
  private:
    char nome[80] = "";

    Universidade* universidadeRegistrada = nullptr;

  public:
    Departamento(const char* nome);
    ~Departamento();

    void  atribuirNome(const char* valor);
    char* obterNome();

    void registrarNaUniversidade(Universidade* valor);
    void imprimirUniversidadeRegistrada();
};

#endif /* A8B433A2_D930_4112_B80D_0B4DC7356B65 */