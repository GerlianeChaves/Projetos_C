#include<stdio.h>

int main(){
	//variaveis
	int v1[10], v2[10], soma[10];

	//entrada
	for(int i = 0; i<10; i++){
		printf("Informe o valor do primeiro vetor: \n");
		scanf("%d", &v1[i]);

		printf("Informe o valor do segundo vetor: \n");
		scanf("%d", &v2[i]);

		soma[i] = v1[i]+v2[i];
	}
	//saida
	printf("Os valores das somas são: ");
	for(int i=0; i < 10; i++){
		printf ("%d,", soma[i]);
	}
}


