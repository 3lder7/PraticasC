#include <stdio.h>
int main(){
	int n1, n2;
	int opcao, soma, sub, mult, div;
	int s, m, x, d;
	
	printf("Primeiro numero:\n");
	scanf("%d", &n1);
	printf("Segundo numero:\n");
	scanf("%d", &n2);
	
	soma = n1 + n2;
	sub = n1-n2;
	mult = n1 * n2;
	div = n1/n2;
	
	printf("Digite a opcao desejada:\n");
	printf("s = Soma\n");
	printf("m = Subtrair\n");
	printf("x = Dultiplicar\n");
	printf("d = Dividir\n");
	scanf("%d", &opcao);
	
	if(opcao = s){
		printf("A soma dos numeros digitados: %d \n", soma);
	}else
	if(opcao = m){
		printf("A subtracao dos numeros digitados: %d \n", sub);
	}else
	if(opcao = x){
		printf("A multiplicacao dos numeros digitados: %d \n", mult);
	}else
	if(opcao = d){
		printf("A divisao dos numeros digitados: %d \n", div);
	}
}
