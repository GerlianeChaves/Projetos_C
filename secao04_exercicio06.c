#include <stdio.h>

//faca um algoritmo que pergunte quanto vc ganha por hora e quantas horas vc trabalha por mes.
//Calcule e mostre o total do seu salario no referido mes.

int main(){
	//variveis
	char mes;
	float ganho_hora, salario, hora_mes;
	//int horas_mes;

	//entrada
	printf("Informe o numero do mes: ");
	scanf("%s", &mes);

	printf("Informe o valor ganho por hora: ");
	scanf("%f", &ganho_hora);
	//printf("%f", ganho_hora);

	printf("Informe a quantidade de horas trabalhadas no mes: ");
	scanf("%d", &hora_mes);

	//processamento
	salario = (ganho_hora*hora_mes);

	//saida
	printf("O salario no mes de %s e: %f", mes, salario);

}
