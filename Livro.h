#pragma once
#include<iostream>
#include<string>
#include<vector>

class Livro {
private:
	int Id;
	std::string Nome;
	std::string Autor;
	std::string Editora;
	double Valor;
	int Ano;
public:
	Livro() : Id(0), Nome(""), Autor(""), Editora(""), Valor(0.0), Ano(0) {

	};
	~Livro() {

	};

	void SetId(int codigo);
	int GetId() const;

	void SetNome(std::string SetNome);
	std::string GetNome() const;

	void SetAutor(std::string SetAutor);
	std::string GetAutor() const;

	void SetEditora(std::string SetEditora);
	std::string GetEditora() const;

	void SetValor(double SetValor);
	double GetValor() const;

	void setAno(int setAno);
	int GetAno() const;
	};

static std::vector<Livro> BancoDeDados;

struct GerenciaLivro {
	int* Id = nullptr;;
	std::string* Nome = nullptr;
	std::string* Autor = nullptr;
	std::string* Editora = nullptr;
	double* Valor = nullptr;
	int* Ano = nullptr;
	GerenciaLivro(){
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
void CadastraLivro(GerenciaLivro *Cadastro, std::vector<Livro>& lista);
void BuscaLivro(GerenciaLivro *Busca, std::vector<Livro>& lista);
void ExcluirLivro(GerenciaLivro*Excluir, std::vector<Livro>& lista);
void ListaGeral(std::vector<Livro>& lista);


