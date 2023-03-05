#include <stdio.h>
//ler 4 valores e fazer o quadrado deles
//se n3²>=1000, então imprimir e finalizar, se não, imprimir todos lidos e calculados

int main(){
	//variaveis
	int n1, n2, n3, n4, q1, q2, q3, q4, i;

	i=0;

	//entrada:
	printf ("Informe o valor 1: ");
	scanf("%d", &n1);
	//printf("%d", n1);
	printf ("Informe o valor 2: ");
	scanf("%d", &n2);
	//printf("%d", n2);
	printf ("Informe o valor 3: ");
	scanf("%d", &n3);
	//printf("%d", n3);
	printf ("Informe o valor 4: ");
	scanf("%d", &n4);
	//printf("%d", n4);

	//processamento
		//quadrado
	q1 = n1*n1;
	q2 = n2*n2;
	q3 = n3*n3;
	q4 = n4*n4;

	if (q3>=1000){
		printf("Resultado: %d", q3);
	}
	else{
		printf("Resultado do quadrardo n1: %d", q1);
		printf("\nResultado do quadrardo n2: %d", q2);
		printf("\nResultado do quadrardo n3: %d", q3);
		printf("\nResultado do quadrardo n4: %d", q4);
	}
	printf("\nFim");
}
