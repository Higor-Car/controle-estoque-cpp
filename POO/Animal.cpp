#include <iostream>
#include <locale.h>
#include <string>
#include "Animal.h"

using namespace std;

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	AnimalCachorro *dadosAnimalC = new AnimalCachorro("Pitbull","Tássio",43);
	AnimalGato *dadosAnimalG = new AnimalGato("Preto","Sem pelo",102);
	
	dadosAnimalC->emitirSom();
	dadosAnimalG->emitirSom();
	dadosAnimalC -> nome = "Caua";
	dadosAnimalC->emitirSom();
}
