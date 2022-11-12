#include <iostream>
#include <iomanip>

using namespace std;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int n;
	string nome[n];
	string classify[n];
	double av1[n];
	double av2[n];
	double av3[n];
	double av4[n];
	double media[n];
	
	cout<<"Quantidade de alunos da turma: ";
	cin>>n;
	cout<<"\n";
	
	for (int i = 0; i < n; i++){
		cout<<"Nome: ";
		cin>>nome[i];
		cout<<"Nota AV1: ";
		cin>>av1[i];
		cout<<"Nota AV2: ";
		cin>>av2[i];
		cout<<"Nota AV3: ";
		cin>>av3[i];
		cout<<"Nota AV4: ";
		cin>>av4[i];
		media[i] = ((av1[i]) + (av2[i]) + (av3[i]) + (av4[i])) / 4;
		cout<<"\n"<<endl;
		cout<<"Média: "<<setprecision(1)<<fixed<<media[i]<<endl;
		if (media[n] >= 6.9){
			cout<<"   Aluno Aprovado"<<endl;
			classify[i] = "Aprovado";
		} else {
			cout<<"Aluno Reprovado"<<endl;
			classify[i] = "Aprovado";
		}
		cout<<"\n"<<endl;
	}
	
	cout<<"-------------------------------------------------"<<endl;
	cout<<"           Registro Escolar"<<endl;
	cout<<"-------------------------------------------------"<<endl;
	
	for(int i = 0; i < n; i++){
		cout<<"\nAluno: "<<nome[i]<<endl;
		cout<<"Média: "<<media[i]<<endl;
		cout<<"Situação: "<<classify[i]<<endl;
		cout<<"\n";
	}
}
