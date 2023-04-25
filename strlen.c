#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char s[N];
	int i;
	
	printf("Digite um texto:\n");
	gets(s);
	i = strlen(s);//descobre o tamanho do texto digitado e joga pra i 
	printf("\nTamanho do texto: %d\n\n", i);
	
	printf("Impressão de posição a posição:\n");
	for(i=0; i<strlen(s); i++){//enquanto i for menor que o tamanho de s fazer i++
		printf("%c ", s[i]);
	} 
}
