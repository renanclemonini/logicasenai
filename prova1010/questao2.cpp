#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	string classif;
	
	cout<<"Digite sua idade: ";
	cin>>idade;
	
	if (idade >= 1 && idade <= 10){
		classif = "Infantil";
	} else if (idade >= 11 && idade <= 15){
		classif = "Adolescente";
	} else if (idade >= 16 && idade <= 17){
		classif = "Jovem";
	} else if (idade >= 18 && idade <= 30){
		classif = "Adulto";
	} else if (idade > 30){
		classif = "Master";
	} else{
		classif = "Idade inválida.";
	}
	
	cout<<"Idade: "<<idade<<"\nClassificação: "<<classif<<endl;
}
