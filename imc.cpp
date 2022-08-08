#include <iostream>

using namespace std;

int main(){
	double imc, peso, altura;
	cout<<"Calculadora IMC"<<endl;
	cout<<"Digite seu peso: "<<endl;
	cin>>peso;
	cout<<"Digite sua altura: "<<endl;
	cin>>altura;
	
	 imc = peso/(altura* altura);
	
	if(imc<18.5){
		cout<<"Voce esta com Peso Baixo"<<endl;
	}else if(imc>=18.5&&imc<=24.9){
		cout<<"Voce esta com Peso Normal"<<endl;
	}else if(imc>=25&&imc<=29.9){
		cout<<"Voce esta com Sobrepeso"<<endl;
	}else if(imc>=30&&imc<=34.9){
		cout<<"Voce esta com Obesidade Grau 1"<<endl;
	}else if(imc>=35&&imc<=39.9){
		cout<<"Voce esta com Obesidade Grau 2"<<endl;
	}else if(imc>=40){
		cout<<"Voce esta com Obesidade Grau 3"<<endl;
	}
	
	
}
