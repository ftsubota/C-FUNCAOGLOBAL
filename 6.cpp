#include<iostream>
#include<cstdlib>
#include<ctime>
#define LIMITE_DADO 7

using namespace std;

int dado(){
	srand(time(NULL));
	int sorteio = rand()% LIMITE_DADO;
	while (sorteio == 0){
		sorteio = rand()% LIMITE_DADO;
	}
		return sorteio;
}

int main(){
	int lado1 = 0;
	int lado2 = 0;
	int lado3 = 0;
	int lado4 = 0;
	int lado5 = 0;
	int lado6 = 0;
	
	for (int i = 0; i < 100000; i++){
		int sorteio = dado();
		switch (sorteio){
			case 1:
				lado1++;
			break;
			case 2:
				lado2++;
			break;
			case 3:
				lado3++;
			break;
			case 4:
				lado4++;
			break;
			case 5:
				lado5++;
			break;
			case 6:
				lado6++;
			break;
		}
		cout << sorteio;
		
	}
	cout << "\n -------------- \n";
	cout << "\n Lado 1: " << lado1;
	cout << "\n Lado 2: " << lado2;
	cout << "\n Lado 3: " << lado3;
	cout << "\n Lado 4: " << lado4;
	cout << "\n Lado 5: " << lado5;
	cout << "\n Lado 6: " << lado6;
		return 0;
}
