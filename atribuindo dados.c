#include <stdio.h>
#define texto "Entrada e saida de dados"//texto = vale entrada e saida de dados

int main(){
	printf("%s\n", texto);
	
	int idade = 0;//a idade começa com 0
	float altura = 0.0;//dados com vírgula 
	char nome [10] = "";//armazena texto
						//char possui [] pois é um vetor
						//dentro dos colchetes vai a quantidade de caracteres que cabem na variável
						
printf("Digite uma idade:\n");
	scanf("%d", &idade);// %d pois a idade é do tipo inteiro
printf("Digite uma altua:\n");
	scanf("%f", &altura);// %f pois é do tipo float
printf("Digite um nome:\n");
	scanf("%s", &nome);// %s pois é um termo com alfnuméricos//se fosse um único caractere, seria %c
	
printf("Dados informados:\n");
printf("Idade:%d \n", idade);
printf("Altura:%.2f \n", altura);
printf("Nome:%s \n", nome);
}
