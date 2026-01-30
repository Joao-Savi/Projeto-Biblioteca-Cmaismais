#include "Livro.h"
void Livraria()
{
	int opcao{ 0 };
	
	GerenciaLivro NovoLivro;
	do {
		std::cout << "\n*********************************";
		std::cout << "\n*   Escolha a opção que deseja: *";
		std::cout << "\n*   1 - opção cadastrar livro   *"; 
		std::cout << "\n*   2 - opção Buscar livro      *";
		std::cout << "\n*   3 - opção Excluir livro:    *";
		std::cout << "\n*   4 - Lista Geralde livros    *";
		std::cout << "\n*   5 - opção saida:            *";
		std::cout << "\n*********************************\n";
		std::cin >> opcao;

		switch (opcao)
		{
		case 1:
			std::cout << "opção cadastrar livro: ";
			CadastraLivro(&NovoLivro, BancoDeDados);
			break;
		case 2:
			std::cout << "opção Buscar livro: ";
			BuscaLivro(&NovoLivro, BancoDeDados);
			break;
		case 3:
			std::cout << "opção Excluir livro: ";
			ExcluirLivro(&NovoLivro, BancoDeDados);
			break;
		case 4:
			std::cout << "opção Lista Geral livro: ";
			ListaGeral(BancoDeDados);
			break;
		case 5:
			std::cout << "Você saiu do Menu!!!";
			break;
		default:
			std::cout << "opcao invalida!!!!";
			break;
		}
	} while (opcao != 5);
}