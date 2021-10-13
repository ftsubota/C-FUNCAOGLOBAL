#include<iostream>
using namespace std;

int numero;

int funcao1(int numero){
	if(numero < 0){
		cout << numero;
		return 1;
	}
	return 0;
	}


int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	cout << "Digite um número:\n";
	cin >> numero;
	
	if (funcao1(numero)){
		cout << "\nNEGATIVO";
	}else{
		cout << "\nPOSITIVO";
		
	}return 0;
}

