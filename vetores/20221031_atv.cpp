#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int numeros[5] = {0};
	
	for(int i = 0; i < 5; i++){
		cout<<"Informe um numero: ";
		cin>>numeros[i];
	}
	
	system("cls");
	
	for(int i = 0; i < 5; i++){
		cout<<"Numeros["<<i<<"] = "<<numeros[i]<<endl;
	}
	
	for(int i = 4; i >= 0; i--){
		cout<<"\nNumeros ["<<i<<"] = "<<numeros[i]<<endl;
	}
}
