#include <stdio.h>
//bibliotecas
//std = standard = padrão
//io = input/output = entrada/saida

//Receber dois numeros, soma-los e multiplicar a soma pelo valor do primeiro numero

int main(){
	//Declarando variaveis
	int n1, n2, soma, mult;

	//entradas
	printf("Informe o primeiro numero: ");
	scanf("%d", &n1);

	printf("Informe o segundo numero: ");
	scanf("%d", &n2);

	//Processamento
	soma = n1 + n2;
	mult = soma * n1;

	//Saida
	printf("O resultado e: %d", mult);



}
