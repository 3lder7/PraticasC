#include <stdio.h>
int main(){
	float m;
	printf("Insira a nota:\n");
	scanf("%f", &m);
	
	if(m>=6){
		printf("Aprovado!\n");	
	}else{
		printf("Reprovado!\n");
	}
	system("pause");	
}
