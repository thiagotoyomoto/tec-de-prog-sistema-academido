#ifndef A8B433A2_D930_4112_B80D_0B4DC7356B65
#define A8B433A2_D930_4112_B80D_0B4DC7356B65

class Departamento
{
  private:
    char nome[80];

  public:
    Departamento(const char* nome);
    ~Departamento();

    void  atribuirNome(const char* nome);
    char* obterNome();
};

#endif /* A8B433A2_D930_4112_B80D_0B4DC7356B65 */