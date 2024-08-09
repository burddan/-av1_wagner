#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int num[2];
	if(argc != 3){
		printf("use ./main {num1} {num2} para comecar \n");
		return 1;
	}
	num[0] = atoi(argv[1]);
	num[1] = atoi(argv[2]);
	if(num[0] > num[1]){
		printf("%d\n",num[0]);
	} else if(num[1] > num[0]){
		printf("%d\n",num[1]);
	} else {
		printf("iguais\n");
	}
}
