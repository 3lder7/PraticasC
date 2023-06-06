#include <stdio.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float n1, n2, res;
	int op;
	printf("Escolha uma opcão:\n");
	puts("1 - Somar");
	puts("2 - Subtrair");
	puts("3 - Multiplicar");
	puts("4 - Dividir");
	scanf("%d", &op);
	
	printf("Digite o primeiro número:\n");
	scanf("%f", &n1);
	printf("Digite o segundo número:\n");
	scanf("%f", &n2);
	
	switch(op){
		case 1:
			res = n1+n2;
			printf("Resultado:%.2f", res);
			break;
		case 2:
			res = n1-n2;
			printf("Resultado:%.2f", res);
			break;
		case 3:
			res = n1*n2;
			printf("Resultado:%.2f", res);
			break;
		case 4:
			if(n2!=0){
				res = n1/n2;
				printf("Resultado:%.2f", res);
			}else{
				printf("Divisão por zero");
			}
			break;		
	}
	
	/*if(op == 1){
		op = n1+n2;
		printf("Resultado:%.2f", op);
	}else
	if(op == 2){
		op = n1-n2;
		printf("Resultado:%.2f", op);
	}else
	if(op == 3){
		op = n1*n2;
		printf("Resultado:%.2f", op);
	}else
	if(n2 == 0){
		printf("Divisão por zero");
	}else{
	op = n1/n2;
	printf("Resultado:%.2f", op);
	}
	*/
		
}
