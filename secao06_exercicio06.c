#include <stdio.h>

//calcular o salario final e excedente

int main(){
	//variaveis
	float c, n, salario_exedente, salario_total, e;

	c = 0;
	n = 0;

	//entrada
	printf("Informe o seu codigo (numerico): ");
	scanf("%f", &c);
	printf("Informe o numero de horas trabalhadas no mes: ");
	scanf("%f", &n);

	//processamento
	if (n>50){
		e = n-50;
		salario_exedente = (e*20);
		salario_total = (50*10)+salario_exedente;
	}
	else{
		e = 0;
		salario_exedente = (e*20);
		salario_total = (50*10)+salario_exedente;
	}
	printf("Salario do mes:\nSalario exedente: %f\nSalario total: %f", salario_exedente, salario_total);

}
