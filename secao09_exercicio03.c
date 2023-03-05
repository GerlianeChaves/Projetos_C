#include <stdio.h>

int main(){
	//variaveis
	int v[10];

	//entrada
	for (int i=0; i<10; i++){
		printf("Informe um valor: \n");
		scanf("%d", &v[i]);
	}

	//saida
	printf("O vetor inverso e: ");
	for (int i=9; i>=0; i--){
		printf (",%d", v[i]);
	}
}
