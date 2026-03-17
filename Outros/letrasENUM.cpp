#include <iostream>
#include <locale.h>

using namespace std;



int main(){

	setlocale(LC_ALL,"Portuguese");
	
	int contador;
	
	enum Letras{A,B,C,D,E,F,G,H,I,J,K};
	
	
	for(contador=A;contador<=K;++contador){
		cout<<contador<<"\n ";
	}
return 0;
}


