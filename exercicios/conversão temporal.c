#include <stdio.h>
int main(){
	int hora, seg, min;
	seg = 1;
	puts("-Este cronometro marca somente em segundos.");
	puts("-Uma hora equivale a: 3600 segundos");
	puts("-Digite -0 para parar a operacao.");
	
	while(seg != -0){
		printf("\nDigite os segundos totais:");
			scanf("%d", &seg);
	
		hora = seg/3600;
		seg = seg - (3600 * hora);
		min = seg/60;
		seg = seg - (60*min);
		
		printf("\nHoras:%d", hora);
		printf("\nMinutos:%d", min);
		printf("\nSegundos:%d\n", seg);
	}
		
	
}
