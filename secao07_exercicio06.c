#include <stdio.h>

//criar uma tabuada de qualquer numero entre 1 a 10

int main(){
	//variaveis
	int n, resp;

	resp = 0;

	//entrada
	printf("Informe de qual numero deseja saber a tabuada (entre 1 e 10)\n");
	scanf("%d", &n);
	printf("-----------------------------------------------\n");

	//processamento
	while (n<1 || n>10){
		printf("Informe de qual numero deseja saber a tabuada (entre 1 e 10)\n");
		scanf("%d", &n);
		printf("-----------------------------------------------\n");

	}
	for(int i=1; i<=10; i++){
		resp = n*i;
		printf("%d x %d = %d\n", n, i, resp);
	}
	printf("-----------------------------------------------\n");
	printf("Tabuada completa");
}
