#include <iostream>

using namespace std;

/*
Fa�a um programa que l� 10 n�meros inteiros do teclado e armazene em um vetor. Ao final imprima o vetor armazenado.
*/

int n;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int valores[n] = {};
	
	cout<<"Digite a quantidade de numeros a serem lidos: ";
	cin>>n;
	
	// leu e armazenou 10 valores em um vetor
	for(int i = 0; i < n; i++){
		cout<<"Digite o "<<i+1<<"� valor: ";
		cin>>valores[i];
	}
	
	// imprimir os valores na tela
	for(int i = 0; i < n; i++){
		cout<<"Valor armazenado no vetor "<<i<<" = "<<valores[i]<<endl;
	}
	
	
	
	
	
	
	
	
}
