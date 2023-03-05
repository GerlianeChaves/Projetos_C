#include <stdio.h>

//algortimo de le o indice de poluicao e notifica as empresas dos grupos

int main(){
	//varivaeis
	float nivel;

	//entrada
	printf("Informe o nivel de poluicao: ");
	scanf("%f", &nivel);

	//processamento
	if (nivel>=0.3 && nivel<0.4){
		//saida
		printf("Notificar as empresas do grupo 1!");
	}else if (nivel>=0.4 && nivel<0.5){
		//saida
		printf("Notificar as empresas do grupo 1 e 2!");
	}else if (nivel>=0.5){
		//saida
		printf("Notificar as empresas do grupo 1, 2 e 3. Urgentemente!");
	}
}
