#include <iostream>

using namespace std;

/*
Ler um vetor de 10 elementos inteiros e positivos. 
Criar um segundo vetor da seguinte forma: os elementos de �ndice par receber�o os respectivos elementos divididos por 2; 

os elementos de �ndice �mpar receber�o os respectivos elementos multiplicados por 3. 

Imprima os dois vetores.
*/

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int valores[10] = {};
	
	// ler o vetor de 10 elementos:
	for(int i = 0; i < 10; i++){
		cout<<"Digite o "<<i+1<<"� valor: ";
		cin>>valores[i];
	}
	
	//verificando pares
	
	cout<<"Verificando par ou impar"<<endl;
	cout<<"\n";
	
	for(int i = 0; i < 10; i++){
		if (valores[i] % 2 == 0){
			cout<<"Valor no vetor "<<i<<" = "<<valores[i]<<" � par!"<<endl;
		} else {
			cout<<"Valor no vetor "<<i<<" = "<<valores[i]<<" � impar!"<<endl;
		}
	}
}
