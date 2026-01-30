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


