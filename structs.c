#include <stdio.h>
#include <string.h>
#include <locale.h>

#define NOME 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[NOME];
};
	
typedef struct tipo_pessoa tipo_pessoa;//renomeia para tipo_pessoa

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa pes = {0, 0.0, "Teste"};//pes = variável e tipo_pessoa = struct
	
	printf("Início\n");
	printf("Idade:%d\n", pes.idade);
	printf("Peso:%.2f\n", pes.peso);
	printf("Nome:%s", pes.nome);
	
	//atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto\n");
	
	printf("\nAlterando via código:\n");
	printf("Idade:%d\n", pes.idade);
	printf("Peso:%.2f\n", pes.peso);
	printf("Nome:%s\n", pes.nome);
	
	//pedindo inserção pelo teclado
	printf("\nInsira um número inteiro:\n");
	scanf("%d", &pes.idade);
	printf("Insira um número real:\n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("Insira uma palavra:\n");
	scanf("%s", &pes.nome);
	
	printf("\nAlterando com dados do usuário:\n");
	printf("Idade:%d\n", pes.idade);
	printf("Peso:%.2f\n", pes.peso);
	printf("Nome:%s\n", pes.nome);
}
