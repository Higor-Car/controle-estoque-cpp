#include <iostream> 
#include <windows.h>

using namespace std;

float calcularIMC(float peso,float altura);
void textoIMC(float calcularIMC);

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float peso,altura;
	
	cout<<"Digite seu peso: \n";
		cin>>peso;
	cout<<"Digite sua altura: \n";
		cin>>altura;
		
	float resultado = calcularIMC(peso,altura);
	textoIMC(resultado);

}

float calcularIMC(float peso,float altura){
	float IMC;
	IMC = peso/(altura*altura);
	return IMC;
}
void textoIMC(float calcularIMC){
	if(calcularIMC<18.5){
		cout<<"Abaixo do peso!\n";
	}else if(calcularIMC>=18.5&&calcularIMC<=24.9){
		cout<<"Você está com o peso normal!\n";
	}else if(calcularIMC>=25&&calcularIMC<=29.9){
		cout<<"Você está sobrepeso!\n";
	}else{
		cout<<"Você está obeso!\n";
	}
}
