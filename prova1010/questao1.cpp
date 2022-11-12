#include <iostream>

using namespace std;

int op;
float valor01, valor02, res;

int main(){
	setlocale(LC_ALL, "portuguese");
	cout<<"Calculadora"<<endl;
	cout<<"\n1 - SOMAR";
	cout<<"\n2 - SUBTRAIR";
	cout<<"\n3 - DIVIDIR";
	cout<<"\n4- MULTIPLICAR"<<endl;
	cout<<"\nDigite opção desejada: ";
	cin>>op;
	
	cout<<"\nDigite n1: ";
	cin>>valor01;
	cout<<"Digite n2: ";
	cin>>valor02;
	
	switch(op){
		case 1:
			res = valor01 + valor02;
			break;
		case 2:
			res = valor01 - valor02;
			break;
		case 3:
			res = valor01 / valor02;
			break;
		case 4:
			res = valor01 * valor02;
			break;
		default:
			cout<<"Operação inválida"<<endl;
			break;
	}
	
	cout<<"\nResultado: "<<res<<endl;
}
