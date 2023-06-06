#include <stdio.h>
int main(){
	float s, a, calc;
	
	printf("Digite o salario:");
	scanf("%f", &s); 
	printf("\nDigite o aumento em porcentagem:");
	scanf("%f", &a);
	
	calc = (s*a)/100 + s ;
	
	printf("\nO novo salario: R$%.2f", calc);
}
