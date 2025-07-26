#include <stdio.h>
main (){
	float vh, sal;
	int he, hs, total;
	
	printf("Digite o valor por hora:");
	scanf("%f", &vh);
	printf("Digite a hora de entrada no turno:");
	scanf("%d", &he);
	printf("Digite a hora de saida do turno:");
	scanf("%d", &hs);
	
	total = hs - he;
	sal = vh * total;
	
	printf("O valor foi de %.2f horas", sal);
}
