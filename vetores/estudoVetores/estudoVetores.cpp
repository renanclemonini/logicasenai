#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"             MENU PRINCIPAL  "<<endl;
	cout<<" Aqui iremos verificar seguintes aspectos: "<<endl;
	cout<<" - Se eles são pares ou impares"<<endl;
	cout<<" - Se são maiores que 5 ou menores que 5"<<endl;
	cout<<" - Exibe o somatório de todos os numeros"<<endl;
	
	int n;
	
	cout<<"\nInsira quantos numeros serão verificados: ";
	cin>>n;
	cout<<"\n";
	
    double soma;
    int n1[n];
	
	for (int i = 0; i < n; i++){
		cout<<"      Comece digitando o "<<i+1<<"º numero: ";
		cin>>n1[i];
	}
	
	cout<<"\n";
	
	for(int i = 0; i < n; i++){
		if (n1[i] % 2 == 0){
			cout<<"      O número "<<n1[i]<<" no "<<i+1<<"º vetor é par."<<endl;
		} else {
			cout<<"      O número "<<n1[i]<<" no "<<i+1<<"º vetor é impar."<<endl;
		}
	}
	
	cout<<"\n";
	
	for (int i = 0; i < n; i++){
		if (n1[i] > 5){
			cout<<"      O número "<<n1[i]<<" no "<<i+1<<"º vetor é maior que 5."<<endl;
		} else if (n1[i] < 5) {
			cout<<"      O número "<<n1[i]<<" no "<<i+1<<"º vetor é menor que 5."<<endl;
		} else {
			cout<<"      O número "<<n1[i]<<" no "<<i+1<<"º vetor é igual a 5."<<endl;
		}
		soma += n1[i];
	}
	
	cout<<"\n";
	cout<<"         O somatorio é igual a: "<<soma<<endl;	
}
