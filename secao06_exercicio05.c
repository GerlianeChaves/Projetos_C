#include <stdio.h>

// saber quantos kg de peixe ele pegou, p, verificar se tem excesso, e, e se tiver, calcular o valor da multa, m
//se não tiver, apresentar e e m com 0

int main(){
	//variaveis
	float p, m, e;

	p = 0;
	e = 0;
	m = 0;
	//entrada
	printf("Informe a quantidade de peixe pescada, em kg: ");
	scanf("%f", &p);

	//ṕrocessamento
	if (p>50){
		printf("Voce pescou alem do permitido. Aguarde enquanto calculamos sua multa.");
		e = (p-50);
		m = e*4;
	}
	else{
		printf("Voce pescou dentro do permitido.");
	}
	printf("\nPescado: %f (kg) \nExcesso: %f(kg)\nMulta: R$ %f", p, e, m);
}
