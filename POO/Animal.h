#ifndef Animal_H_INCLUDED
#define Animal_H_INCLUDED

class Animal{
	
	public:
		
		std::string nome;
		int idade;
		
		virtual void emitirSom();
		void exibirNaTela();
};
void Animal::emitirSom(){
	std::cout<<"Som genérico\n";
}

class AnimalCachorro:public Animal{
	
	public:
		
		std::string raca;
		
		AnimalCachorro(std::string escolhaRaca,std::string escolhaNome,int escolhaIdade){
		raca=escolhaRaca;
		nome=escolhaNome;
		idade=escolhaIdade;
		
		std::cout<<"A raça do cachorro é: "<<raca<<std::endl;
		std::cout<<"O nome do cachorro é: "<<nome<<std::endl;
		std::cout<<"A idade do cachorro é: "<<idade<<std::endl;
		std::cout<<std::endl;
		std::cout<<std::endl;
		}
	void emitirSom()override{
			std::cout<<"Au!Au!"<<std::endl;
	}
};

class AnimalGato:public Animal{
	
	public:
		
		std::string cor;
		AnimalGato(std::string escolhaCor,std::string escolhaNome,int escolhaIdade){
			cor=escolhaCor;
			nome=escolhaNome;
			idade=escolhaIdade;
			
			std::cout<<"A cor do gato é: "<<cor<<std::endl;
			std::cout<<"O nome do gato é: "<<nome<<std::endl;
			std::cout<<"A idade do gato é: "<<idade<<std::endl;
			std::cout<<std::endl;
			std::cout<<std::endl;
		}
		
		void emitirSom()override{
			std::cout<<"Miau!Miau!"<<std::endl;
		}
		
	};	
#endif
