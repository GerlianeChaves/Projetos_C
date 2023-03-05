#include <stdio.h>

//faca um algoritmo que peca dois numeros e mostre a soma

int main(){
	//variveis
	int n1, n2, soma;

	//entrada
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	//processamento
	soma = n1 + n2;

	//saida
	printf("Soma = %d", soma);

}
