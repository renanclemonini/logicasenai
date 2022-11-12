#include <iostream>
#include <iomanip>

using namespace std;

/*
O Sistema de calcular a média entre as Notas AV1, AV2 e AV3.
Menu Principal
1 - Adicionar a média de cada aluno no vetor.
2 - Exibir quantos alunos foram aprovados. (média >= 7)
3 - Exibir quantos alunos foram reprovados. (média < 7)
4 - Exibir a soma de todas as medias.
5 - Encerrar
*/

int main(){
	setlocale(LC_ALL, "portuguese");
	
	int a;
	
	cout<<"    -----ATIVIDADE SISTEMA DE NOTAS------"<<endl;
	cout<<"\n";
	
	cout<<"         -----MENU PRINCIPAL------"<<endl;
	cout<<"\n";
	cout<<"      Digite a quantidade de alunos: ";
	cin>>a;
	cout<<"\n";
	
	float av1[a] = {};
	float av2[a] = {};
	float av3[a] = {};
	float media[a] = {};
	
	cout<<" ---------------------------------------------- "<<endl;
	cout<<"\n      --Calculadora de Média Escolar--"<<endl;
	
		
	for(int i = 0; i < a; i++){
		cout<<"\n";
		cout<<"      Digite a nota AV1 do "<<i+1<<"º aluno: ";
		cin>>av1[i];
		cout<<"      Digite a nota AV2 do "<<i+1<<"º aluno: ";
		cin>>av2[i];
		cout<<"      Digite a nota AV3 do "<<i+1<<"º aluno: ";
		cin>>av3[i];
		media[i] = (av1[i]+av2[i]+av3[i]) / 3;
		cout<<"\n            Média do aluno: "<<setprecision(1)<<fixed<<media[i]<<endl;
		if (media[i] >= 7.0){
			cout<<"             Aluno "<<i+1<<" APROVADO"<<endl;
		} else {
			cout<<"             Aluno "<<i+1<<" REPROVADO"<<endl;
		}
		cout<<" ---------------------------------------------- "<<endl;
	}
	
	double soma;
	for(int i = 0; i < a; i++){
		soma += media[i];
	}
	
	cout<<"\n";
	cout<<"         Somatorio das médias = "<<soma<<endl;
}
