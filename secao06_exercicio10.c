#include <stdio.h>

//classificar os nadadores de acordo com a idade

int main(){
	//variaveis
	int idade;

	//entrada
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);

	//processamento/saida
	if (idade>=5 && idade<=7){
		//saida
		printf("Categoria Infantil-a");
	}else if (idade>=8 && idade<=11){
		//saida
		printf("Categoria Infantil-b");
	}else if (idade>=12 && idade<=13){
		//saida
		printf("Categoria Juvenil-a");
	}else if (idade>=14 && idade<=17){
		//saida
		printf("Categoria Juvenil-b");
	}else if (idade>=18){
		//saida
		printf("Categoria Adulta");
	}else{
		//saida
		printf("Idade impropria para competir");
	}
}
