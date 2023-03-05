#include<stdio.h>

int main(){
	//variaveis
	int v[10], i=0;
	char s = 50;

	//entrada
	for(i=0; i<10; i++){
		printf("Informe o valor: ", (i+1));
		scanf("%d", &v[i]);
	}
	for (i=0; i<10; i++){
		if(v[i]>50){
			printf("O numero %d esta na posicao %d\n", v[i], i);
			s=1;
		}
	}

	if(s<50){
		printf("Nao ha numeros maiores que 50");
	}
}
