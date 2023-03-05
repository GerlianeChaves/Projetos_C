#include <stdio.h>

//ler 10 valores, encontrar maior e menor e calcular a média dos numeros lidos

int main(){
	//variaveis
	int n, i, maior, menor, soma;
	float media;

	maior = -999;
	menor = 999;
	media = 0;
	soma = 0;

	//entrada
	for(i=0; i<10; i++){
		printf("Informe o valor: ");
		scanf("%d", &n);
		//processamento
		if(n>0){
			if(n>maior){
				maior = n;
			}
			if(n<menor){
				menor = n;
			}
			soma = soma + n;
		}else{
			i--;

		}
	}
	media = soma/10;
	printf("a media e: %f\nO maior valor e: %d\nO menor valor e: %d", media, maior, menor);
}
