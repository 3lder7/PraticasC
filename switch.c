#include <stdio.h>
int main(){
	int n1, n2;
	int soma, sub, mult, divs;
	int opcao;
	
	printf("Primeiro  numero:\n");
	scanf("%d", &n1);
	printf("Segundo numero:\n");
	scanf("%d", &n2);
			
	printf("Escolha uma opcao:\n");
	printf(" 1 = SOMAR\n");
	printf(" 2 = SUBTRAIR\n");
	printf(" 3 = MULTIPLICAR\n");
	printf(" 4 = DIVIDIR\n");
	scanf("%d", &opcao);
	
	soma = n1+n2;
	sub = n1-n2;
	mult = n1 * n2; 
	divs = n1 / n2; 
	
	switch(opcao){
		case 1:
			printf("Soma dos numeros: %d \n", soma);
			break;
		case 2:
			printf("Subtracao dos numeros: %d \n", sub);
			break;
		case 3:
			printf("Multiplicacao dos numeros: %d \n", mult);
			break;
		case 4:
			printf("Divisao dos numeros: %d \n", divs);
			break;
		default:
			printf("Um numero nao foi aplicado.\n");
			break;		
	}
}
