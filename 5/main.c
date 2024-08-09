#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]){
	int num[3];
	if(argc != 4){
		printf("use ./main {num1} {num2} {num3} para comecar \n");
		return 1;
	}
	num[0] = atoi(argv[1]);
	num[1] = atoi(argv[2]);
	num[2] = atoi(argv[3]);

	int maior = num[0];
	if(num[1] > maior){
		maior = num[1];
	}
	if(num[2] > maior){
		maior = num[2];
	}
	printf("o maior %d\n",maior);
}
