#include <stdio.h>

void imprime1(int v[], int n){//n é atríbuido ao tamanho do vetor
	int i;
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
}

void imprime2(int v[5]){
	int i;
	for(i=0;i<5;i++){
		printf("%d ", v[i]);
	}
}

void imprime3(int *v, int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ", v[i]);
	}
}
 
int main(){
	int vet[5]={1,2,3,4,5};//na hora de imprimir, deve-se passar o tamanho do vet
	
	puts("Primeiro imprime:");
	imprime1(vet, 5);
	
	puts("\nSegundo imprime:");
	imprime2(vet);
	
	puts("\nTerceiro imprime:");
	imprime3(vet, 5);
}
