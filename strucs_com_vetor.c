#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};
	
typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[TAM];//tamanho 3
	int i;
	printf("Lendo dados de 3 pessoas diferentes\n");
	for(i=0;i<TAM;i++){
		printf("\nInsira os dados (%d):\n", i+1);
		puts("Nome: ");
		scanf("%50[^\n]s", &lista[i].nome);//dentro dos [], indica que o scanf lerá espaços
		fflush(stdin);
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		fflush(stdin);	
		}
		system("cls");//limpa o cmd
		
		puts("Seus dados:\n");
		for(i=0;i<TAM;i++){
			printf("---PESSOA %d---\n", i+1);
			printf("Nome: %s\n", lista[i].nome);
			printf("Idade: %d\n", lista[i].idade);
			printf("Peso: %.2f\n", lista[i].peso);
		}
		printf("-------------");
}	

