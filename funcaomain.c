#include <stdio.h>
//obs; essas caracteristicas são para caso sejam executadas pelo cmd
int main(int argc, char *argv[]){//argc conta todas palavras vindas depois do nome do programa
	int i;						//argv conta o conteudo do texto digitado
	
	if(argc > 1){//se foi digitado mais doq o nome do programa(mais do que 1)
		printf("Foram inseridos %d argumentos:");
		for(i=0; i<argc; i++){
			printf("%s\n", argv[i]);//imprime cada uma das palavras digitadas com espaço
		}
	}else{
		printf("Não foram inseridos mais argumentos");
	}
}
