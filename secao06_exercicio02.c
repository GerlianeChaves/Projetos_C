#include <stdio.h>
//ler um numero e se positivo armazenar em a, se negativo, armazenar em b

int main(){
	//variaveis
	int n, a, b;

	//entrada
	printf("Informe um número (positivo ou negativo): ");
	scanf("%d", &n);

	//processamento
	if (n>0){
		a = n;
		printf("O valor foi armazenado em 'a', ou seja, valor positivo");
	}
	else{
		b = n;
		printf("o valor foi armazenado em 'b', ou seja, valor negativo");
	}
}
