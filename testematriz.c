#include <stdio.h>
int main(){
	
int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
int i, j;

printf("Primeira linha\n");
for(j=0; j<3; j++){
	printf("%d ", mat[0][j]);
}

}
