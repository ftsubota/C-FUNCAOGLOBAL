#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int menor=1, maior=6;	

int dado(int menor, int maior){
	return rand()%(maior-menor+1) + menor;
}

int main(){
	setlocale(LC_ALL,"Portuguese"); 
	
	srand((unsigned)time(0));
	int sorteio = dado(1,6);
	cout << "O numero aleatório é: " << sorteio;
	return 0;
}
