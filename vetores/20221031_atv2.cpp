#include <iostream>

using namespace std;

int n;

int main(){
	setlocale(LC_ALL, "portuguese");
	
	cout<<"Insira a quantidade de numeros a serem verificados: ";
	cin>>n;
	cout<<"\n";
	
	int array1[n] = {};
	
	//armazenando primeiro
	for (int i = 0; i < n; i++){
		cout<<"Insira um valor no "<<i+1<<"º vetor: ";
		cin>>array1[i];
	}
	
	cout<<"\n";
	
	/*exibição
	for(int i = 0; i < n; i++){
		cout<<"Valor ["<<i+1<<"] = "<<array1[i]<<endl;
	}
	*/
	
	cout<<"\nVerificador de numeros pares"<<endl;
	cout<<"\n";
	
	//exibindo pares
	for (int i = 0; i < n; i++){
		if (array1[i] % 2 == 0){
			cout<<"Valor ["<<i+1<<"] = "<<array1[i]<<" é par, valor atual dividido por 2 = "<<array1[i]/2<<endl;
		}
		if (array1[i] % 2 != 0){
			cout<<"Valor ["<<i+1<<"] = "<<array1[i]<<" é impar, valor atual multiplicado por 3 = "<<array1[i]*3<<endl;
		}
	}
	
}
