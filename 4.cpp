#include<iostream>
using namespace std;

int a, b, c;

int funcao2(int a, int b, int c){
	if(a < b && a < c){
		return a;
	}else if(b < a && b < c){
		return b;
	}else if(c < a && c < b){
		return c;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite um numero:\n";
	cin  >> a;
	cout << "Digite o segundo numero:\n";
	cin  >> b;
	cout << "Digite o terceiro numero:\n";
	cin  >> c;
	cout << "O menor valor é: " << funcao2(a, b ,c);
	return 0;
}
