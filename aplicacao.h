#pragma once
#include"Livro.h"

struct GerenciaLivro {
	int* Id = nullptr;;
	std::string* Nome = nullptr;
	std::string* Autor = nullptr;
	std::string* Editora = nullptr;
	double* Valor = nullptr;
	int* Ano = nullptr;
	GerenciaLivro() {
		Id = new int(0);
		Nome = new std::string("");
		Autor = new std::string("");
		Editora = new std::string("");
		Valor = new double(0);
		Ano = new int(0);
	}
	~GerenciaLivro() {
		delete Id;
		delete Nome;
		delete Autor;
		delete Editora;
		delete Valor;
		delete Ano;
	}
};

void Livraria();
void CadastraLivro(GerenciaLivro* Cadastro, std::vector<Livro>& lista);
void BuscaLivro(GerenciaLivro* Busca, std::vector<Livro>& lista);
void ExcluirLivro(GerenciaLivro* Excluir, std::vector<Livro>& lista);
void ListaGeral(std::vector<Livro>& lista);

