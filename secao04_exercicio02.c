#include <stdio.h>

//calcular o estoque de uma peça sendo que 	estoq_med = (quant_min + quant_max)/2;

int main(){
	//variaveis
	float quant_min, quant_max;
	float estoq_med;

	//entrada

	//quantidade minima
	printf("Informe a quantidade minima: ");
	scanf("%f", &quant_min);
	printf("Quant min inform %f", quant_min);

	// quantidade maxima
	printf("\nInforme a quantidade maxima: ");
	scanf("%f", &quant_max);
	printf("Quant max inform %f", quant_max);

	//processamento
	estoq_med = ((quant_max+quant_min)/2);

	//saida
	printf("\nValor do estoque medio e: %.2f", estoq_med);

}
