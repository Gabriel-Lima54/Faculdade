#include <stdio.h>
main (){
	int termo, razao, vet[7], i;
	printf("Digite o primeiro termo da PA: ");
	scanf("%d", &termo);
	printf("Digite a razao da PA: ");
	scanf("%d", &razao);
	printf("20 valores da PA:");
	printf("\n%d", termo);
	for (i=0;i<6;i++)
		printf("\n%d", termo += razao);
}
