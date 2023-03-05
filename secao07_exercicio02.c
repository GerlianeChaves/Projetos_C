#include <stdio.h>

//contar até 100 e a cada multiplo 10 informar isso na msg

//Forma 1 de resolver:
/*int main(){
	//variaveis
	int n;
	n=0;

	//processamento
	while(n<100){
		printf("%d\n", n);
		if(n%10==0){
			printf("multiplo de 10\n");
			n = n+1;
		}else{
			n = n+1;
		}
	}
}*/
//Forma 2 de resolver:
int main(){
	//variaveis
	int i;

	//processamento
	for(i=1; i<=100; i++){
		printf("%d\n", i);
		if(i%10==0){
			printf("multiplo de 10\n");
		}
	}
}
