#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float not1, not2, not3;
	float mediapon;
	
	printf("Digite a nota do trabalho de laboratório:");
	scanf("%f", &not1);
	printf("\nDigite a nota da avaliação semestral:");
	scanf("%f", &not2);
	printf("\nDigite a nota do exame final:");
	scanf("%f", &not3);
	
	mediapon = (not1*2 + not2*3 + not3*5)/10;
	printf("Média ponderada do aluno:%.2f", mediapon);
	
	if(mediapon > 8 && mediapon <= 10){
		printf("\nAluno conceito: A");
	}else
	if(mediapon > 7 && mediapon <= 8){
		printf("\nAluno conceito: B");
	}else
	if(mediapon > 6 && mediapon <= 7){
		printf("\nAluno conceito: C");
	}else
	if(mediapon > 5 && mediapon <= 6){
		printf("\nAluno conceito: D");
	}else{
		printf("\nAluno conceito: E");
	}
	
	return 0;
}
