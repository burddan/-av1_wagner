#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
	int media;
	if(argc != 3){
		printf("./main {nota1}, {nota2}\n");
		return 1;
	}
	for(int i=1;i<=argc-1;i++){
		if(atoi(argv[i]) < 0 || atoi(argv[i]) > 10){
			printf("numero(s) invalido\n");
			return 1;
		}
		for(int j=0;j<2;j++){
			if(!isdigit(argv[i][j]) || argv[i][j] == '\0'){
				printf("numero(s) com caracteres invalidos\n");
				printf("%i\n",argv[i][j]);
			}
		}
		media += atoi(argv[i]); 
	}
	if(media / 2 >= 7){
		printf("aprovado");
		if(media / 2 == 10){
			printf(" com distincao");
		}
		printf("\n");
	} else if(media / 2 < 7){
		printf("reprovado\n");
	} else {
		// n chega aq
	}

}

