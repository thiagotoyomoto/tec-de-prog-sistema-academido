// O "guard" foi gerado através de uma extensão do VSCode chamada:
// "C/C++ Include Guard", onde ele consegue gerar o "guard" através de um GUID
#ifndef F6E4EA23_837F_4FBF_B37E_09E94001650E
#define F6E4EA23_837F_4FBF_B37E_09E94001650E

// Por padrão, os atributos e métodos de uma "struct" já são públicos.
// Já em uma "classe", os atributo e métodos, por padrão, são privados.
class Pessoa
{
  private:
    int dia;
    int mes;
    int ano;
    int idade;

  public:
    Pessoa(int diaDeNascimento, int mesDeNascimento, int anoDeNascimento);
    void calcularIdade(int diaAtual, int mesAtual, int anoAtual);
    int  informarIdade();
};

#endif /* F6E4EA23_837F_4FBF_B37E_09E94001650E */
