#include <iostream>
#include <locale.h>
#include <string>

using namespace std;

int main(){

	setlocale(LC_ALL,"Portuguese");

	int maior,menor,igual,contador,numero[5];
	
	maior=0;
	menor=0;
	igual=0;
	
	for(contador=0;contador<5;++contador){
		cout<<"Digite o "<<contador+	1<<" número:\n ";
		cin>>numero[contador];
	}
	
	for(contador=0;contador<4;++contador){
		if(numero[contador+1]>numero[0]){
			maior+=1;
		}else if(numero[contador+1]<numero[0]){
			menor+=1;
		}else{
			igual+=1;
		}
	}
	
cout<<"Foram "<<maior<<" números maiores\n";
cout<<"Foram "<<menor<<" números menores\n";
cout<<"Foram "<<igual<<" números iguais\n";
	

system("Pause");
	
return 0;	

}
