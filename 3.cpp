#include<iostream>
using namespace std;

int a, b, c;

int funcao1(int a, int b, int c){
	if (a > b && a > c){
		return a;
	}else if(b > a && b > c){
		return b;
	}else if(c > a && c > b){
		return c;
	}
}

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	cout << "Digite um número:\n";
	cin >> a;
	cout << "Digite o segundo número:\n";
	cin >> b;
	cout << "Digite o terceiro número:\n";
	cin >> c;
	cout << "O maior valor é:\n" << funcao1(a,b,c);	

	
}
