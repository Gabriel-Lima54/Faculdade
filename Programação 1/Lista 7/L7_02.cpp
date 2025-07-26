#include <stdio.h>
main (){
	int i, vet[3];
	printf("Digite os valores:\n");
	for (i=0;i<3;i++)
		scanf("%d", &vet[i]);
	printf("Valores digitados:");
	for (i=0;i<3;i++)
		printf("\n%d", vet[2 - i]);
}
