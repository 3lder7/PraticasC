#include <stdio.h>
int main(){
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	
	for(i=0; i<5; i++){//enquanto i menor que 5, add uma posi��o
		s += v[i];//o �ndice de i no v � somado e atribuido � s
	}
	printf("Resultado: %f", s/5);
}
