#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"             MENU PRINCIPAL  "<<endl;
	cout<<" Aqui iremos verificar seguintes aspectos: "<<endl;
	cout<<" - Se eles s�o pares ou impares"<<endl;
	cout<<" - Se s�o maiores que 5 ou menores que 5"<<endl;
	cout<<" - Exibe o somat�rio de todos os numeros"<<endl;
	
	int n;
	
	cout<<"\nInsira quantos numeros ser�o verificados: ";
	cin>>n;
	cout<<"\n";
	
    double soma;
    int n1[n];
	
	for (int i = 0; i < n; i++){
		cout<<"      Comece digitando o "<<i+1<<"� numero: ";
		cin>>n1[i];
	}
	
	cout<<"\n";
	
	for(int i = 0; i < n; i++){
		if (n1[i] % 2 == 0){
			cout<<"      O n�mero "<<n1[i]<<" no "<<i+1<<"� vetor � par."<<endl;
		} else {
			cout<<"      O n�mero "<<n1[i]<<" no "<<i+1<<"� vetor � impar."<<endl;
		}
	}
	
	cout<<"\n";
	
	for (int i = 0; i < n; i++){
		if (n1[i] > 5){
			cout<<"      O n�mero "<<n1[i]<<" no "<<i+1<<"� vetor � maior que 5."<<endl;
		} else if (n1[i] < 5) {
			cout<<"      O n�mero "<<n1[i]<<" no "<<i+1<<"� vetor � menor que 5."<<endl;
		} else {
			cout<<"      O n�mero "<<n1[i]<<" no "<<i+1<<"� vetor � igual a 5."<<endl;
		}
		soma += n1[i];
	}
	
	cout<<"\n";
	cout<<"         O somatorio � igual a: "<<soma<<endl;	
}
