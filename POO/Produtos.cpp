#include <iostream>
#include <locale.h>
#include "produtoHeader.h"

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	Produto *dadosProduto1 = new Produto(1);
	Produto *dadosProduto2 = new Produto(2);
	Produto *dadosProduto3 = new Produto(3);
	
	dadosProduto1 -> exibirDadosNaTela();
	dadosProduto2 -> exibirDadosNaTela();
	dadosProduto3 -> exibirDadosNaTela();
	
system("pause");
	
return 0;
	
}
