#include<stdio.h>

int main(){
	//variaveis
	float v[5];
	int cod;

	//entradas
	printf("Informe o codigo: ");
	scanf("%d", &cod);

	if(cod!=0){
		for(int i=0; i<5; i++){
			printf("Informe um numero real: ");
			scanf("%f", &v[i]);
		}
		//processamento
		if(cod==1){
			for(int i=0; i<5; i++){
				printf("%.2f\n", &v[i]);
			}
		}
		if(cod==2){
			for(int i=4; i>=0; i--){
				printf("%.2f\n", &v[i]);
			}
		}
	}

}
