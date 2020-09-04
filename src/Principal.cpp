#include "Principal.hpp"
#include "Data.hpp"
#include "Departamento.hpp"
#include <iostream>

Principal::Principal() :
    einstein("Einstein", 14, 3, 1879), joao("Joao", 1, 1, 1996),
    newton("Newton", 4, 1, 1643), thiago("Thiago", 18, 4, 2001),
    cambridge("Universidade de Cambridge"), harvard("Universidade Harvard"),
    princeton("Universidade de Princeton"),
    utfpr("Universidade Tecnologica Federal do Parana"),
    yale("Universidade Yale"),
    departamentoDeAstrologia("Departamento de Astrologia"),
    departamentoDeComputacao("Departamento de Computacao"),
    departamentoDeFisica("Departamento de Fisica"),
    departamentoDeMatematica("Departamento de Matematica"),
    departamentoDeQuimica("Departamento de Quimica")
{
    /*
    Obs.: Para ignorar algum valor de uma tupla, é só utilizar o objeto
          "std::ignore".

          Exemplo:
            std::tie(std::ignore, mesAtual, anoAtual) = obterDataAtual
    */
    std::tie(diaAtual, mesAtual, anoAtual) = Data::obterAtual();
    Data::imprimirFormatada(diaAtual, mesAtual, anoAtual);

    cambridge.adicionarDepartamento(&departamentoDeFisica);
    princeton.adicionarDepartamento(&departamentoDeMatematica);
    utfpr.adicionarDepartamento(&departamentoDeComputacao);
    yale.adicionarDepartamento(&departamentoDeAstrologia);
    yale.adicionarDepartamento(&departamentoDeQuimica);

    einstein.atribuirUniversidadeFiliado(&princeton);
    newton.atribuirUniversidadeFiliado(&cambridge);
    thiago.atribuirUniversidadeFiliado(&utfpr);

    einstein.atribuirDepartamentoFiliado(&departamentoDeMatematica);
    newton.atribuirDepartamentoFiliado(&departamentoDeFisica);
    thiago.atribuirDepartamentoFiliado(&departamentoDeComputacao);

    departamentoDeAstrologia.registrarNaUniversidade(&yale);
    departamentoDeComputacao.registrarNaUniversidade(&utfpr);
    departamentoDeFisica.registrarNaUniversidade(&cambridge);
    departamentoDeMatematica.registrarNaUniversidade(&princeton);
    departamentoDeQuimica.registrarNaUniversidade(&yale);

    executar();
}

void Principal::executar()
{
    einstein.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    joao.calcularIdade(diaAtual, mesAtual, anoAtual);
    newton.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);
    thiago.calcularEImprimirIdade(diaAtual, mesAtual, anoAtual);

    std::cout << '\n';

    einstein.imprimirUniversidadeFiliado();
    joao.imprimirUniversidadeFiliado();
    newton.imprimirUniversidadeFiliado();
    thiago.imprimirUniversidadeFiliado();

    std::cout << '\n';

    einstein.imprimirDepartamentoFiliado();
    joao.imprimirDepartamentoFiliado();
    newton.imprimirDepartamentoFiliado();
    thiago.imprimirDepartamentoFiliado();

    std::cout << '\n';

    cambridge.imprimirTodosOsDepartamentos();
    harvard.imprimirTodosOsDepartamentos();
    princeton.imprimirTodosOsDepartamentos();
    utfpr.imprimirTodosOsDepartamentos();
    yale.imprimirTodosOsDepartamentos();

    std::cout << std::flush;
}