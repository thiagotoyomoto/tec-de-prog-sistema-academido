// Por padrão, os atributos e métodos de uma "struct" já são públicos.

struct Pessoa
{
    int dia;
    int mes;
    int ano;
    int idade;

    Pessoa(int diaAtual, int mesAtual, int anoAtual)
    {
        dia   = diaAtual;
        mes   = mesAtual;
        ano   = anoAtual;
        idade = -1;
    }

    void calcularIdade(int diaAtual, int mesAtual, int anoAtual)
    {
        idade = anoAtual - ano;

        if(mes < mesAtual)
        {
            idade -= 1;
        }
        else if(mes == mesAtual)
        {
            if(dia < diaAtual)
            {
                idade -= 1;
            }
        }
    }
};