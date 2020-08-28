// O "guard" foi gerado através de uma extensão do VSCode chamada:
// "C/C++ Include Guard", onde ele consegue gerar o "guard" através de um GUID.
#ifndef F6E4EA23_837F_4FBF_B37E_09E94001650E
#define F6E4EA23_837F_4FBF_B37E_09E94001650E

#include "Universidade.hpp"

// Por padrão, os atributos e métodos de uma "struct" já são públicos.
// Já em uma "classe", os atributo e métodos, por padrão, são privados.
class Pessoa
{
  private:
    char nome[40];
    int  diaDeNascimento;
    int  mesDeNascimento;
    int  anoDeNascimento;
    int  idade;

    Universidade* universidadeFiliado;

  public:
    // O valor padrão só deve aparecer no protótipo da função/método/construtor.
    // -----
    // Como todos os parâmetros estão com valor padrão, ele já é considerado um
    // construtor vazio.
    Pessoa(const char* nome = "", int diaDeNascimento = 0,
           int mesDeNascimento = 0, int anoDeNascimento = 0);

    void inicializa(const char* nome, int diaDeNascimento, int mesDeNascimento,
                    int anoDeNascimento);

    void calcularIdade(int diaAtual, int mesAtual, int anoAtual);
    void imprimirIdade();
    void calcularEImprimirIdade(int diaAtual, int mesAtual, int anoAtual);

    int informarIdade();

    void atribuirUniversidadeFiliado(Universidade* universidade);
    void imprimirUniversidadeFiliado();
};

#endif /* F6E4EA23_837F_4FBF_B37E_09E94001650E */
