#include <iostream>
#include <iomanip>

using namespace std;

/*

O Sistema de calcular a m�dia entre as Notas AV1, AV2 e AV3.
Menu Principal
1 - Adicionar a m�dia de cada aluno no vetor.
2 - Exibir quantos alunos foram aprovados. (m�dia >= 7)
3 - Exibir quantos alunos foram reprovados. (m�dia < 7)
4 - Exibir a soma de todas as medias.
5 - Encerrar

*/

int n;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"\nDigite a quantidade de alunos: ";
	cin>>n;
	cout<<"\n";
	
	string aluno[n] = {};
	double av1[n] = {};
	double av2[n] = {};
	double av3[n] = {};
	double media[n] = {};
	
	
	for (int i = 0; i < n; i++){
		cout<<"Digite o nome do "<<i+1<<"� aluno: ";
		cin>>aluno[i];
		cout<<"Av1: ";
		cin>>av1[i];
		cout<<"Av2: ";
		cin>>av2[i];
		cout<<"Av3: ";
		cin>>av3[i];
		media[i] = (av1[i]+av2[i]+av3[i])/3;
		cout<<"M�dia do aluno "<<aluno[i]<<": "<<setprecision(1)<<fixed<<media[i]<<endl;
		cout<<"\n";
		if (media[i] >= 7.0){
			cout<<"Situa��o: APROVADO!"<<endl;
		} else {
			cout<<"Situa��o: REPROVADO!"<<endl;
		}
		cout<<"\n";
	}
}
