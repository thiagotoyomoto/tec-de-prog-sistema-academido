#include "Principal.hpp"
#include "Data.hpp"
#include <iostream>

Principal::Principal() :
    joao("Joao", 1, 1, 1996), thiago("Thiago", 18, 4, 2001),
    einstein("Einstein", 14, 3, 1879), newton("Newton", 4, 1, 1643),
    UTFPR("Universidade Tecnologica Federal do Parana"),
    princeton("Universidade de Princeton"),
    cambridge("Universidade de Cambridge")
{
    /*
    Obs.: Para ignorar algum valor de uma tupla, é só utilizar o objeto
          "std::ignore".

          Exemplo:
            std::tie(std::ignore, mesAtual, anoAtual) = obterDataAtual
    */
    std::tie(diaAtual, mesAtual, anoAtual) = Data::obterAtual();
    Data::imprimirFormatada(diaAtual, mesAtual, anoAtual);

    thiago.atribuirUniversidadeFiliado(&UTFPR);
    einstein.atribuirUniversidadeFiliado(&princeton);
    newton.atribuirUniversidadeFiliado(&cambridge);

    executar();
}

void Principal::executar()
{
    joao.calcularIdade(diaAtual, mesAtual, anoAtual);
    thiago.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    einstein.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    newton.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);

    std::cout << '\n';

    joao.imprimirUniversidadeFiliado();
    thiago.imprimirUniversidadeFiliado();
    einstein.imprimirUniversidadeFiliado();
    newton.imprimirUniversidadeFiliado();

    std::cout << std::flush;
}