#include "Livro.h"
#include<iostream>

void Livro::SetId(int codigo)
{
	this->Id = codigo;
}

int Livro::GetId() const
{
	return Id;
}

void Livro::SetNome(std::string SetNome)
{
	this->Nome = SetNome;
}

std::string Livro::GetNome() const
{
	return this->Nome;
}

void Livro::SetAutor(std::string SetAutor)
{
	this->Autor = SetAutor;
}

std::string Livro::GetAutor() const
{
	return this->Autor;
}

void Livro::SetEditora(std::string SetEditora)
{
	this->Editora = SetEditora;
}

std::string Livro::GetEditora() const
{
	return this->Editora;
}

void Livro::SetValor(double SetValor)
{
	this->Valor = SetValor;
}

double Livro::GetValor() const
{
	return this->Valor;
}

void Livro::setAno(int setAno)
{
	this->Ano = setAno;
}

int Livro::GetAno() const
{
	return this->Ano;
}
