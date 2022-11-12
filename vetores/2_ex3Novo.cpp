#include <iostream>
#include <iomanip>

using namespace std;

float medias[10] = {0};
int quantidade = 0;

void menu(){
	cout<<"       ______________________________________"<<endl;
	cout<<"      |                                      |"<<endl;
	cout<<"      |            MENU PRINCIPAL            |"<<endl;
	cout<<"      |                                      |"<<endl;
	cout<<"      |     1 - ADICIONAR MEDIA              |"<<endl;
	cout<<"      |     2 - EXIBIR APROVADOS             |"<<endl;
	cout<<"      |     3 - EXIBIR REPROVADOS            |"<<endl;
	cout<<"      |     4 - EXIBIR SOMATORIO DAS MÉDIAS  |"<<endl;
	cout<<"      |     5 - Boletim                      |"<<endl;
	cout<<"      |     6 - Sair                         |"<<endl;
	cout<<"      |______________________________________|"<<endl;
	cout<<"\n";
}

void addMedia(float av1, float av2, float av3){
	for(int i = 0; i < 10; i++){
		if(medias[i] == 0){
			medias[i] = (av1 + av2 + av3) / 3;
			//cout<<"  =>  Media: "<<setprecision(1)<<fixed<<medias[i];
			quantidade++;
			break;
		}
	}
}

int quantAprovados(){
	int aprovados = 0;
	for(int i = 0; i < quantidade; i++){
		if (medias[i] >= 7){
			aprovados++;
		}
	}
	return aprovados;
}

int quantReprovados(){
	int reprovados = 0;
	for(int i = 0; i < quantidade; i++){
		if (medias[i] < 7){
			reprovados++;
		}
	}
	return reprovados;
}

float somaVetor(){
	float soma = 0;
	for(int i = 0; i < quantidade; i++){
		soma += medias[i];
	}
	return soma;
}

float boletimEscolar(){
	for(int i = 0; i < quantidade; i++){
		cout<<"      |   Aluno "<<i+1<<"                            |"<<endl;
		cout<<"      |   Média Final: "<<setprecision(2)<<fixed<<medias[i]<<"                  |"<<endl;
		if (medias[i] < 7){
			cout<<"      |   Status: REPROVADO                  |"<<endl;
		} else {
			cout<<"      |   Status: APROVADO                   |"<<endl;
		}
		cout<<"      |                                      |"<<endl;
	}
}


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op;
	float av1, av2, av3;
	
	do{
		//cout<<"\n";
		menu();
		cout<<"        Escolha a operação desejada: ";
		cin>>op;
		
		switch(op){
			case 1:
				//adicionando media
				system("cls");
				cout<<"\n";
				cout<<"        =>  Adicionando média "<<endl;
				cout<<"\n";
				cout<<"                 AV1: ";
				cin>>av1;
				cout<<"                 AV2: ";
				cin>>av2;
				cout<<"                 AV3: ";
				cin>>av3;
				cout<<"\n";
				addMedia(av1, av2, av3);
				system("cls");
				cout<<"\n";
				cout<<"             Média inserida com sucesso!"<<endl;
				//cout<<"\n";
				break;
			case 2:
				//aprovados
				system("cls");
				cout<<"\n";
				cout<<"             Quantidade de aprovados: "<<quantAprovados()<<endl;
				break;
			case 3:
				//reprovados
				system("cls");
				cout<<"\n";
				cout<<"             Quantidade de reprovados: "<<quantReprovados()<<endl;
				break;
			case 4:
				//exibir somatório
				system("cls");
				cout<<"\n";
				cout<<"             Soma das médias: "<<setprecision(2)<<fixed<<somaVetor()<<" pts. "<<endl;
				break;
			case 5:
				//boletim
				system("cls");
				cout<<"       ______________________________________"<<endl;
				cout<<"      |                                      |"<<endl;
				cout<<"      |         BOLETIM DE ALUNOS            |"<<endl;
				cout<<"      |                                      |"<<endl;
				boletimEscolar();
				cout<<"      |   Total de alunos:          "<<quantidade<<"        |"<<endl;
				cout<<"      |   Quantidade de Aprovados:  "<<quantAprovados()<<"        |"<<endl;
				cout<<"      |   Quantidade de Reprovados: "<<quantReprovados()<<"        |"<<endl;
				cout<<"      |   Somatório das Médias:     "<<setprecision(2)<<fixed<<somaVetor()<<"    |"<<endl;
				cout<<"      |______________________________________|"<<endl;
				cout<<"\n"<<endl;
				cout<<"             Deseja continuar ou sair?"<<endl<<"     [6] para sair ou outro para menu principal: ";
				cin>>op;
				//system("cls");
				break;
		}
	}while(op != 6);
	
}
