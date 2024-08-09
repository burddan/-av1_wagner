#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void check(char letra);
int main(int argc, char* argv[]){
	if(argc != 2){
		printf("digite a letra ./main {letra}\n");
		return 1; 
	}
	if(strlen(argv[1]) != 1){
		printf("2 caracteres, digite apenas 1 letra\n");
		return 1;
	}
	if(isdigit(argv[1][0])){
		printf("caracter contendo numero, digite apenas 1 letra\n");
		return 1;
	}
	char letra = tolower(argv[1][0]);
	check(letra);
	return 0;	
}

void check(char  letra){
	if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
		printf("vogal\n");
	} else if((letra >= 'a' && letra <= 'z')) {
		printf("consoante\n");
	} else {
		printf("invalido\n");
	}
}
