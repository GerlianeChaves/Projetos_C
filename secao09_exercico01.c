#include <stdio.h>

int main(){
	//variaveis
	int v[5], par[5], cont_p=0;

	//entrada
	for(int i=0; i<5; i++){
		printf("Informe o valor: \n");
		scanf("%d", &v[i]);

		//processamento
		if (v[i]%2==0){
			if(v[i]>0){
				par[cont_p] = v[i];
				cont_p = cont_p +1;
			}
		}
	}

	//saida
	printf("Os valores pares informados são: ");
	for(int i=0; i < cont_p; i++){
		printf ("%d,", par[i]);
	}
}
