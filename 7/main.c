#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
		char pergunta[64];
} Perguntas;

int main(){
		char input;
		int pontos = 0;
		Perguntas perguntas[] = {
				{"Telefonou para a vítima?: "},
				{"Esteve no local do crime?: "},
				{"Mora perto da vítima?: "},
				{"Devia para a vítima?: "},
				{"Já trabalhou com a vítima?: "},
		};
		printf("responda com 's' ou 'n'\n");
		for(int i=0;i<5;i++){
				printf("%s\n",perguntas[i].pergunta);
				input = getchar();
				while(input != 's' && input != 'n'){
						system("clear");
						printf("%s\n",perguntas[i].pergunta);
						input = getchar();
				}
				system("clear");
				if(input == 's')
						pontos++;
		}
		switch(pontos){
				case 2:
						printf("suspeito\n");
						break;
				case 3:
				case 4:
						printf("cumplice\n");
						break;
				case 5:
						printf("assasino\n");
						break;
				default:
						printf("inocente\n");
						break;
		}
		return 1;

}

