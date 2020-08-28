#ifndef C7C9DF9F_7322_46C4_AA16_4236189C7FE6
#define C7C9DF9F_7322_46C4_AA16_4236189C7FE6

class Universidade
{
  private:
    char nome[80];

  public:
    Universidade(const char* nome = "");
    ~Universidade();

    void  atribuirNome(const char* nome);
    char* obterNome();
};

#endif /* C7C9DF9F_7322_46C4_AA16_4236189C7FE6 */