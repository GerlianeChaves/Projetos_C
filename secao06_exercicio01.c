#include <stdio.h>
// ler uma variavel numerica n e se n>100 imprimi-la, se não, n=0

int main(){
	int n;

	//entrada
	printf("Informe o valor de n: ");
	scanf("%d", &n);

	//processamento
	if (n>100){
		printf("Saida: %d", n);
	}
	else{
		n = 0;
		printf("Saida: %d", n);
	}

}
