#include <stdio.h>
int main(){
	int v[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	
	for(i=0; i<5; i++){//enquanto i menor que 5, add uma posição
		s += v[i];//o índice de i no v é somado e atribuido á s
	}
	printf("Resultado: %f", s/5);
}
