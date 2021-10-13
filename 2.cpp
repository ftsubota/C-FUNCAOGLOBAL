#include<iostream>
using namespace std;

float a, b, c;

float delta (float a, float b, float c){
	float d = ((b*b)-(4*a*c));
	return d;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout << "Digite o valor de a:\n";
	cin  >> a;
	
	cout << "Digite o valor de b:\n";
	cin  >> b;
	
	cout << "Digite o valor de c:\n";
	cin  >> c;

	cout<< "O valor de Delta é: " << delta(a, b, c); 
	return 0;
}

