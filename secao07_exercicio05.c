#include <stdio.h>
#include <string.h>

int main(){
	//variaveis
	char nm[100], senha[100];

	//entrada
	printf("informe o nome do usuario: ");
	gets(nm);
	printf("Informe a senha: ");
	gets(senha);

	//processamento
	while (!strcmp(nm, senha)){
		//saida
		printf("Erro ao informar a senha. Senha e usuario devem ser diferentes, tente novamente.\n ");
		printf("informe o nome do usuario: ");
		gets(nm);
		printf("Informe a senha: ");
		gets(senha);
	}
	//saida
	printf("Operacao realizada com sucesso");
}

