#include <stdio.h>
float maior(float num1, float num2){
	if (num1 > num2)
		return num1;
	else
		return num2;
	}
	
int main(){
x	float , y, m;
	
	
	printf("Insira um valor:\n");
	scanf("%f", &x);
	printf("Insira mais um valor:\n");
	scanf("%f", &y);
	
	m = maior (x, y);//aqui � puxado o maior l� de cima e atribui o x � num2 e o y � num2
	printf("Maior valor:%.1f\n", m);
	
}


