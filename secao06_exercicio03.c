#include <stdio.h>
//ler um numero, verificar se ele e impar ou par, se impar i = n, se par p=n. exibir p ou i no final

int main(){
	//variaveis
	int n, i, p;

	p = 0;
	i = 0;
	//entrada
	printf("Digite um numero: ");
	scanf("%d", &n);

	//processamento
	if (n%2==0){
		p = n;
		printf("numero par");
	}
	else{
		i = n;
		printf("numero impar");
	}
	printf("\nvalores finais: p =%d, i=%d", p, i);
}
