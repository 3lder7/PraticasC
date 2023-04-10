#include <stdio.h>
int main(){
	int A, B, som, sub, mul, div;
	printf("Digite um numero:\n");
	scanf("%d", &A);
	printf("Digite outro numero:\n");
	scanf("%d", &B);
	som = A + B;
	sub = A - B;
	mul = A * B;
	div = A / B;
	printf("Soma: %d \n", som);
	printf("Subtracao: %d \n", sub);
	printf("Multiplicacao: %d \n", mul);
	printf("Divisao: %d", div);
}
