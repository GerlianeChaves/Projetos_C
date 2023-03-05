#include <stdio.h>

int main(){
	//variaveis
	int v[20], soma=0, i=0;

	//entradas
	for (i =0; i<20; i++){
		printf("Informe o valor: ");
		scanf("%d", &v[i]);

		//processamento
		soma = soma+v[i];
	}

	//saida
	printf("O valor da soma e: %d", soma);
}
