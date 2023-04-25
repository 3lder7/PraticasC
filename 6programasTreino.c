#include <stdio.h>
int main(atv1){
	
	int reais, res;//gas
	int gas = 5;
	
		printf("O valor do litro da gasolina: R$%d,00 \n", gas);
		printf("Quantos reais de gasolina deseja por?:\n");
			scanf("%d", &reais);
	res = reais / gas;
		printf("Com R$%d,00 de gasolina,", reais);
		printf(" voce pode por: %d", res);
		printf(" Litros\n");
		
	printf("----------------------------\n");
	int n1, n2, n3, mp;//not
	
		printf("Nota 1:");
			scanf("%d", &n1);
		printf("Nota 2:");
			scanf("%d", &n2);
		printf("Nota 3:");
			scanf("%d", &n3);
	mp = (n1+n2+n3)/1+2+3;
		printf("A media ponderada: %d\n", mp);
	
	printf("----------------------------\n");
	int kg = 12;//restaur
	int peso, res2;
	int prato = 0.800;
	
    	printf("O kg no restaurante: R$%d,00\n", kg);
    	printf("Peso do prato cliente: Kg:\n");
    		scanf("%d", &peso);
    res2 = (peso*kg)-prato;
    	printf("O valor a ser pago: R$%d\n", res2);
    	
    printf("----------------------------\n");
    int p = 10;
	int m = 12;
	int g = 15;
	int resp, resm, resg, resp1, resm2, resg3;
	
    	printf("Quantidade de camisas P:\n");
    		scanf("%d", &resp);
    	printf("Quantidade de camisas M:\n");
    		scanf("%d", &resm);
    	printf("Quantidade de camisas G:\n");
    		scanf("%d", &resg);
    resp1 = resp * p;
    resm2 = resm * m;
    resg3 = resg * g;
    	printf("Valor a pagar por camisas P: R$%d,00\n", resp1);
    	printf("Valor a pagar por camisas M: R$%d,00\n", resm2);
    	printf("Valor a pagar por camisas G: R$%d,00\n", resg3);
    	
    printf("----------------------------\n");
    int celsius, pfah;
		printf("Digite os graus: C°\n");
			scanf("%d", &celsius);
	pfah = (celsius*1.8)+32;
		printf("Transferindo para Fahrenheit: F°%d\n", pfah);
	printf("----------------------------\n");
	int num1, num2, num3, res3;
	printf("Primeiro numero:\n");
	scanf("%d", &num1);
	printf("Segundo numero:\n");
	scanf("%d", &num2);
	printf("Terceiro numero:\n");
	scanf("%d", &num3);
	res3 = num1*num2*num3;
	printf("Multiplicacao entre eles: %d\n", res3);
    
}	
	


