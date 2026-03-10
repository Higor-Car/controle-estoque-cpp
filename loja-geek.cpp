#include <iostream>

#include <locale.h>

#include <string>

using namespace std;

int main(){

	setlocale(LC_ALL,"Portuguese");

	int posicao,totalCompras,opcaoJogo;
	char opcao;
	const string jogos[4]={"The Witcher","Minecraft","CS:GO","FIFA"};
	const int preco[4]={150,100,50,200};
	
	totalCompras=0;
	
	for (posicao=0;posicao<4;++posicao){
		cout<<posicao+1<<"-"<<jogos[posicao]<<"-"<<preco[posicao]<<"\n";
	}
	
	cout<<"Quer comprar algum jogo(S/N)\n";
			cin>>opcao;
		
		while(opcao=='S'||opcao=='s'){
			
			cout<<"Qual jogo gostaria de comprar?\n";
				cin>>opcaoJogo;

			switch(opcaoJogo){
		
			case 1:
				totalCompras+=preco[0];
				break;
				
			case 2:
				totalCompras+=preco[1];
				break;
				
			case 3:
				totalCompras+=preco[2];
				break;
				
			case 4:
				totalCompras+=preco[3];
				break;
				
			default:
				cout<<"Jogo não encontrado!\n";
				break;
		}
	
	cout<<"Deseja comprar mais algum jogo (S/N)\n";
		cin>>opcao;
	}
	if(totalCompras>0){
		cout<<"Sua compra deu um total de: "<<totalCompras<<"\n";
	}else{
		cout<<"Volte mais tarde!\n";
	}

return 0;	

}
