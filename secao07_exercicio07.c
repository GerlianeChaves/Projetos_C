#include <stdio.h>
//#include <string.h>

int main(){
	//variaveis
	int cod;
	float p1, p2, p3, p4;
	int quant,def, def1, def2, def3, def4;
	quant =0;
	def = 0;
	def1 = 0;
	def2 =0;
	def3 = 0;
	def4 = 0;

	//entrada
	printf("Informe o codigo: \n");
	scanf("%d", &cod);

	//processamento
	while (cod!= 0){
		quant = quant+1;
		//entrada
		printf("Informe o numero do defeito:\n");
		printf("1- Necessita de esfera;\n2- Necessita de limpeza;\n3- Necessita de troca de ou conector;\n4- Quebrado ou inutilizavel\n");
		scanf("%d", &def);

		//saida
		if(def<0 || def>4){
			printf("Erro, tente novamente\n");
			printf("Informe o codigo: \n");
			scanf("%d", &cod);
		}
		if(def==1){
			def1=def1+1;
			printf("Informe o codigo: \n");
			scanf("%d", &cod);
		}
		if(def==2){
			def2=def2+1;
			printf("Informe o codigo: \n");
			scanf("%d", &cod);
		}
		if(def==3){
			def3=def3+1;
			printf("Informe o codigo: \n");
			scanf("%d", &cod);
		}
		if(def==4){
			def4=def4+1;
			printf("Informe o codigo: \n");
			scanf("%d", &cod);
		}
	}
	p1 = ((float)(def1*100)/(float)quant);
	p2 = ((float)(def2*100)/(float)quant);
	p3 = ((float)(def3*100)/(float)quant);
	p4 = ((float)(def4*100)/(float)quant);

	printf("Processo encerrado.\n");
	printf("Apresentando relatorio ... \n");
	printf("Quantidade de mouses: %d\n", quant);
	// comando \t da espaço
	printf("|          Situacao           | Quantidade | Percentual |\n");
	printf("|-----------------------------|------------|------------|\n");
	printf("|1-Necessita de esfera        |     %d     |     %f     |\n", def1, p1);
	printf("|2-Necessita de limpeza       |     %d     |     %f     |\n", def2, p2);
	printf("|3-Necessita de troca/conector|     %d     |     %f     |\n", def3, p3);
	printf("|4-Quebrado ou inutilizavel   |     %d     |     %f     |\n", def4, p4);


}
