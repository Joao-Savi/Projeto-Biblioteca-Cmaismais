#include "Livro.h"
#include<iostream>

void CadastraLivro(GerenciaLivro *Cadastro, std::vector<Livro>& lista)
{
	Livro ObtTemp;
	std::cout << "insira os dados do Livro a ser cadastrado: ";
	std::cout << "\nCodigo: ";
	std::cin >> *Cadastro->Id;
	std::cout << "\nNome: ";
	std::cin >> *Cadastro->Nome;
	std::cout << "\nAutor: ";
	std::cin >> *Cadastro->Autor;
	std::cout << "\nEditora: ";
	std::cin >> *Cadastro->Editora;
	std::cout << "\nValor: R$: ";
	std::cin >> *Cadastro->Valor;
	std::cout << "\nAno: ";
	std::cin >> *Cadastro->Ano;

	ObtTemp.SetId(*Cadastro->Id);
	ObtTemp.SetNome(*Cadastro->Nome);
	ObtTemp.SetAutor(*Cadastro->Autor);
	ObtTemp.SetEditora(*Cadastro->Editora);
	ObtTemp.SetValor(*Cadastro->Valor);
	ObtTemp.setAno(*Cadastro->Ano);
	lista.push_back(ObtTemp);

}


void BuscaLivro(GerenciaLivro *Busca, std::vector<Livro>& lista)
{
	int index;
	bool encontrado = false;
	std:: cout << "\n-----Busca De Livro______\n";
	std::cout << "Digite o ID que deseja buscar: ";
	std::cin >> index;

	for (const auto& Livro : lista) {
		if (Livro.GetId() == index) {
			std::cout << "\nCodigo: " << Livro.GetId();
			std::cout << "\nNome: " << Livro.GetNome();
			std::cout << "\nAutor: " << Livro.GetAutor();
			std::cout << "\nEditora: " << Livro.GetEditora();
			std::cout << "\nValor: R$: " << Livro.GetValor();
			std::cout << "\nAno: " << Livro.GetAno();
			encontrado = true;
			break;
		}
	}if (!encontrado) {
			std::cout << "\nErro: Livro com codigo " << index << " nao encontrado.";
	}
		std::cout << "\n";
}

void ExcluirLivro(GerenciaLivro *Excluir, std::vector<Livro>& lista)
{
	int IdExclusao;
	std::cout << "\n----- Exclusão de Livro -----\n";
	std::cout << "Digite o Codigo do livro que deseja remover: ";
	std::cin >> IdExclusao;
	bool removido = false;

	for (auto item = lista.begin(); item != lista.end();) {
		if (item->GetId() == IdExclusao) {
			// O método erase remove o item e retorna o próximo iterador válido
			item = lista.erase(item);
			removido = true;
			std::cout << "Livro removido com sucesso!\n";
			break;
		}
		else {
			++item; // Só avança se não removeu
		}
	} if (!removido) {
		std::cout << "Livro nao encontrado!\n";
	}
}

void ListaGeral(std::vector<Livro>& lista)
{
	if (lista.empty()) { //serve para mostrar quando não tem nada no vetor
		std::cout << "\nO banco de dados esta vazio!\n";
		return;
	}

	std::cout << "\n========== LISTA DE LIVROS ==========";

	for (const auto &busca : lista){ 
		std::cout << "\nID:      " << busca.GetId();
		std::cout << "\nNome:    " << busca.GetNome();
		std::cout << "\nAutor:   " << busca.GetAutor();
		std::cout << "\nEditora: " << busca.GetEditora();
		std::cout << "\nValor:   R$ " << busca.GetValor();
		std::cout << "\nAno:     " << busca.GetAno();
		std::cout << "\n------------------------------------";
	}
}

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
