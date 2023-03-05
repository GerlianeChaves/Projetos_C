#include <stdio.h>

//faca um algoritmo que converta m em cm

int main(){
	//variveis
	int m, cm;

	//entrada
	printf("Comecou: ");
	printf("Informe o valor em metros: ");
	scanf("%d", &m);
	printf(m);

	//processamento
	printf("iniciando processamento");
	cm = m*100;
	printf("%d", cm);

	//saida
	printf("%d em centimetros e: %d cm", m, cm);

}
