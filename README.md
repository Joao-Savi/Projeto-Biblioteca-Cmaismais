# Biblioteca C++
Projeto de estudo para melhor entendimento das funções de POO

## Main()

O arquivo main apenas chama a função Livraria que está dentro de Biblioteca.cpp

## Livraria()
Aqui fica a função void Livraria que serve como menu para chamar as funções contidas em aplicação.cpp

## APLICACAO.CPP | APLICACAO.H
### APLICACAO.H
aqui foi criado o escopo das funções e estruturas contidas na aplicacao, como a struct que recebe os dados inseridos 
da aplicacao e suas funções, aqui tudo é temporario, apos ser executado ele deixa de existir
|obs. o escopo de Livraria tambem fica contido em aplicacao.h|

### APLICACAO.CPP
aqui ele chama as funções para cadastro do objeto(Livro) do vetor
tambem tem a função de busca especifica por um objeto(Livro) do vetor
a função de exclusão de objeto(Livro) do vetor
e a função de busca Geral, para retornar todos os valores contidos no vetor

## Livro.CPP | Livro.H

### Livro.H
armazena o escopo do Vetor e a Classe Livro, alem de chamar os #includes

### Livro.CPP
aqui é declarado os Set e Get de Livro
 
