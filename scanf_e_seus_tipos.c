#include <stdio.h>
int main(){
	char s[10];
	
	printf("Digite algo:\n");//scanf convencional, ignora espa�os
	scanf("%s", s);//sem & para vetor
	fflush(stdin); 
	
	printf("Resultado: %s\n", s);
	
	printf("Digite outra coisa:\n");//scanf aprimorado, n�o ignora espa�os
	scanf("%12[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n", s);
	
}
