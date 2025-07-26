#include <stdio.h>
main (){
	float n1, n2, n3, media;
	char op;
	
	printf("Digite as tres notas do aluno:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	printf("Digite como a media sera calculada:");
	fflush(stdin);
	op = getchar();
	
	if (op == 'a' || op == 'A'){
		media = (n1 + n2 + n3) / 3;
		printf("A media das notas eh:%.2f", media);
	}
	else if (op == 'h' || op == 'H'){
		media = 3 / ((1 / n1) + (1 / n2) +(1 / n3));
		printf("A media das notas eh:%.2f", media);
	}
	else 
		printf("codigo invalido");
}

