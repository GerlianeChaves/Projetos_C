#include <stdio.h>

//determinar maior numero entre N numeros

int main(){
	//variveis
	int n, maior;
	maior = 0;

	//entrada
	printf("Informe um numero: ");
	scanf("%d", &n);

	//processamento
	while(n!=0){
		//printf("entrei no loop");
		if (n>maior){
			maior = n;
			//printf("entrei no loop1");
		}
		printf("Informe um numero: ");
		scanf("%d", &n);
	}
	printf("O maior valor e: %d", maior);
}
