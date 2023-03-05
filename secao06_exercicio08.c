#include <stdio.h>

//ler um inteiro e mostrar msg dizendo se e par ou impar, positivo ou negativo

int main(){
	//variaveis
	int n;

	//entrada
	printf("Informe um numero inteiro: ");
	scanf("%d", &n);

	//processamento
	if(n>0 && n%2==0){
		//saida
		printf("Valor positivo e par");
	}
	if(n>0 && n%2!=0){
			//saida
			printf("Valor positivo e impar");
	}
	if(n<0 && n%2==0){
			//saida
			printf("Valor negativo e par");
	}
	if(n<0 && n%2!=0){
			//saida
			printf("Valor negativo e impar");
	}
}
