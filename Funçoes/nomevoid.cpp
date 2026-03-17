#include <iostream>
#include <locale.h>

using namespace std;

void nomeCompleto(string nome,string sobrenome);

int main(){

	setlocale(LC_ALL,"Portuguese");
	
	string nome,sobrenome,resultado;

	cout<<"Digite seu primeiro nome:\n";
	cin>>nome;
	cout<<"Digite seu sobrenome:\n";
	cin>>sobrenome;
	
	nomeCompleto(nome,sobrenome);
	
return 0;
}

void nomeCompleto(string nome,string sobrenome){
	cout<<"Seu nome é: "<<nome<<" "<<sobrenome;	
}


