#include <stdio.h>
main (){
	float vh, sal, b1, b2, aum;
	int he, hs, total;
	
	printf("Digite o valor por hora:");
	scanf("%f", &vh);
	printf("Digite a hora de entrada no turno:");
	scanf("%d", &he);
	printf("Digite a hora de saida do turno:");
	scanf("%d", &hs);
	
	if (he < 6 && hs <= 20){
		b1 = 6 - he;
		aum = (20 * 0.2) + vh;
		b1 = b1 * aum;
		total = hs - 6;
		sal = (vh * total) + b1;
	}
	else if (he >= 6 && hs > 20){
		b1 = hs - 20;
		aum = (20 * 0.2) + vh;
		b1 = b1 * aum;
		total = 20 - he;
		sal = (vh * total) + b1;
	}
	else if (he < 6 && hs > 20){
		b1 = 6 - he;
		b2 = hs - 20;
		aum = (20 * 0.2) + vh;
		b1 = b1 * aum;
		b2 = b2 * aum;
		total = 15;
		sal = (vh * total) + b1 + b2;
	}
	else{	
		total = hs - he;
		sal = vh * total;
	}
	printf("O valor foi de %.2f horas", sal);
}
