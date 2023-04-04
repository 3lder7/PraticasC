#include <stdio.h>

int main(){
	int idade = 0;
	int ano = 2004;
	printf("Idade inicial: %d.\n", idade);
	printf("Ano inicial: %d. \n", ano);
	
	printf("Digite um valor para a idade:");
	scanf("%d", &idade);
	printf("A idade informada foi: %d \n", idade);
	
	printf("Agora digite um valor para o ano:");
	scanf("%d", &ano);
	printf("O ano informado foi: %d", ano);
}
