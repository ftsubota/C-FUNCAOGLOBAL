#include<iostream>
using namespace std;

int nota1, nota2, nota3;
int mediaMaioresNotas;

int media(int nota1, int nota2, int nota3){
	int nota= (nota1+nota2+nota3)/3;
	return nota;
}
int notaMaior(int nota1, int nota2, int nota3){
	if(nota1 > nota2 && nota1 > nota3){
		return nota1;
	}else if(nota2 > nota1 && nota2 > nota3){
		return nota2;
	}else{
		return nota3;
	}
}
int notaMenor(int nota1, int nota2, int nota3){
	if(nota1 < nota2 && nota1 < nota3){
		return nota1;
	}else if(nota2 < nota1 && nota2 < nota3){
		return nota2;
	}else{
		return nota3;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");

	mediaMaioresNotas = (nota1 + nota2 + nota3 - notaMenor(nota1, nota2, nota3))/2;
	cout<< "Digite sua primeira nota:\n";
	cin >> nota1;
	cout<< "Digite sua segunda nota:\n";
	cin >> nota2;
	cout<< "Digite sua terceira nota:\n";
	cin >> nota3;
	cout<< "A média de notas é: " << media(nota1, nota2, nota3) << endl;
	cout<< "A média das duas maiores notas é: " << mediaMaioresNotas << endl;
	cout<< "A maior nota é: " << notaMaior(nota1, nota2, nota3) << endl;
	cout<< "A menor nota é: " << notaMenor(nota1, nota2, nota3) << endl;
	return 0;
	
	
	
}
