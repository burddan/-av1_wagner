#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int check_num(char *num);
int main(){
	char num[64];
	printf("digite um numero inteiro: ");
	scanf("%s",num);
	int check = check_num(num);
	if (check == 1)
		return 1;
	int num_int = atoi(num);
	if(num_int % 2 == 0){
		printf("numero par\n");
	} else {
		printf("numero impar\n");
	}

}
int check_num(char *num){
	for(int i=0;i<strlen(num);i++){
		if(isalpha(num[i]) || ispunct(num[i]) || isspace(num[i])){
			printf("numero incorreto ou não inteiro \n");
			return 1;
		}
	}
	return 0;
}
