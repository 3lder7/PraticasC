#include <stdio.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	int nota1;
	int nota2;
	int nota3;
	int mediaex;
	int mediaap;
	char conc[5];
	
	printf("Digite a média dos exercícios:");
	scanf("%d", &mediaex);
	printf("\nDigite as três notas do aluno:");
	scanf("%d%d%d", &nota1, &nota2, &nota3);
		
	mediaap = (nota1 + nota2 + nota3) * 3 + mediaex / 7;
	
	if(mediaap >= 9){
		conc = "A";
	}
	else if((mediaap >= 7.5) && (mediaap < 9)){
		conc = "B";
	}
	else if((mediaap >= 6) && (mediaap < 7.5)){
		conc = "C";
	}
	else if(mediaap <6){
		conc = "D";
	}
	
	printf("O conceito do aluno é nota:%d", conc);	
}
