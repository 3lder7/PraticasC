#include <stdio.h>
int main(){
	char s[10];
	
	printf("Digite algo:\n");//leitura com gets(nao controla limite de vetor)
	gets(s); 
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
	
	printf("Digite outra coisa:\n");
	fgets(s, 10, stdin);//controla o limite de caracter
	fflush(stdin);
	
	puts("Resultado:");
	puts(s);
}
