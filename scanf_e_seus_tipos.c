#include <stdio.h>
int main(){
	char s[10];
	
	printf("Digite algo:\n");//scanf convencional, ignora espaços
	scanf("%s", s);//sem & para vetor
	fflush(stdin); 
	
	printf("Resultado: %s\n", s);
	
	printf("Digite outra coisa:\n");//scanf aprimorado, não ignora espaços
	scanf("%12[^\n]s", s);
	fflush(stdin);
	
	printf("Resultado: %s\n", s);
	
}
