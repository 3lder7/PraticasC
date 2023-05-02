#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[15];
	int qnt;
	int prc;
	int desc;
	int total;
	int totalp;
	
	printf("Digite o nome do produto:");
	fgets(nome, 15, stdin);
	printf("\nPreço unitário do produto:R$");
	scanf("%d", &prc);
	printf("\nDigite a quantidade que deseja comprar dele:");
	scanf("%d", &qnt);
	
	total = qnt*prc;
	
	if(qnt <= 5){
		desc = 2;
	}else if(qnt > 5 && qnt <= 10){
		desc = 30;
	}else if(qnt > 10){
		desc = 5;
	}
	
	totalp = (desc/100)*total;
	
	printf("\nO produto:%s", nome);
	printf("Valor total do produto:%d", total);
	printf("\nVocê ganha um desconto de:%d", desc);
	printf("\nValor total  com o desconto:R$%d", totalp);
	
	printf("O conceito do aluno é nota:%d", conc);	
}

