#include <stdio.h>
#include <stdio.h>

typedef struct {
	char t;
	char mensagem[24];
}Turno;

int main(){
	char input;
	Turno turnos[] = {
		{'M', "bom dia"},
		{'V', "boa tarde"},
		{'N', "boa noite"},
	};
	printf("de que turno vc estuda?: ");
	scanf("%c",&input);
	switch(input) {
		case 'M':
		case 'm':
			printf("%s\n", turnos[0].mensagem);
			break;
		case 'V':
		case 'v':
			printf("%s\n", turnos[1].mensagem);
			break;
		case 'N':
		case 'n':
			printf("%s\n", turnos[2].mensagem);
			break;
		default:
			printf("deu merda \n");
			break;
	}
}
