#include <stdio.h>
#include <ctype.h> //trata as strings recebidas
// calcular o peso ideial com formulas diferentes para homens e mulheres

int main(){
	//variaveis
	float altura, peso_ideal;
	char sexo;

	//entrada
	printf("Informe sua altura");
	scanf("%f", &altura);
	gets(stdin); //corrigi bug
	printf("Informe seu sexo (m ou f)");
	scanf("%c", &sexo);

	//processamento
	if(tolower(sexo) == 'f'){ //tolower tranforma a string recebida em minusculo
		printf("Voce e mulher");
		peso_ideal = ((62.1*altura)-44.7);
		//saida
		printf("\nSeu peso ideial e: %f", peso_ideal);
	}
	if(tolower(sexo) == 'm'){ //tolower tranforma a string recebida em minusculo{
		printf("Voce e homem");
		peso_ideal = ((72.7*altura)-58);
		//saida
		printf("\nSeu peso ideial e: %f", peso_ideal);
	}
	if (tolower(sexo) !='m' && tolower(sexo) !='f'){
		//saida
		printf("Sexo nao reconhecido");
	}

}
