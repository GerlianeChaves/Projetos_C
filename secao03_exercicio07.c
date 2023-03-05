#include <stdio.h>

// calcular peso ideal

int main(){
	float altura, peso_ideal;

	//entrada
	printf("Qual a sua altura em metros? ");
	scanf("%f", &altura);
	//printf("%f", altura);

	//processamento
	peso_ideal = ((72.7*altura)-58);

	//saida
	printf("Peso ideal: %f", peso_ideal);

}
