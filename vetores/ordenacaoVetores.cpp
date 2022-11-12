#include <iostream>

using namespace std;

int vetorX, vetores, aux;

void menu(){
	cout<<"       ______________________________________"<<endl;
	cout<<"      |                                      |"<<endl;
	cout<<"      |            MENU PRINCIPAL            |"<<endl;
	cout<<"      |                                      |"<<endl;
	cout<<"      |     1 - CADASTRAR VETOR              |"<<endl;
	cout<<"      |     2 - ORDEM CRESCENTE              |"<<endl;
	cout<<"      |     3 - ORDEM DECRESCENTE            |"<<endl;
	cout<<"      |     4 - ENCERRAR                     |"<<endl;
	cout<<"      |______________________________________|"<<endl;
	cout<<"\n";
}

float addVetor(float vetorX){
	for(int i = 0; i < 100; i++){
		cout<<"            => Digite um número: ";
		cin>>vetorX;
		vetores++;
		break;
	}
}

/*float vetorCrescente(){
	for(int i = 0; i < vetores; i++){
		for(int j = i+1; j < vetores; j++){
			if(vetorX[i] > vetorX[j]){
				aux = vetorX[i];
				vetorX[i] = vetorX[j];
				vetorX[j] = aux;
			}
		}
	}
	for(int i = 0; i < vetores; i++){
		cout<<"Ordem crescente: "<<vetoX[i]
	}
}
*/


int main(){
	setlocale(LC_ALL, "portuguese");
	
	int op;
	
	do{
		menu();
		cout<<"        Escolha a operação desejada: ";
		cin>>op;
		switch(op){
			case 1:
				//cadastrar vetor
				system("cls");
				cout<<"\n";
				addVetor(vetorX);
				cout<<"\n";
				cout<<"            Vetor adicionado com sucesso! "<<endl;
				cout<<"\n";
				break;
			case 2:
				//exibição crescente
				//vetorCrescente();
				break;
			case 3:
				break;
		}
		
	}while (op != 4);
	
}
