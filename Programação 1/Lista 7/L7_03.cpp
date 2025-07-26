#include <stdio.h>
main (){
	int i, vet[3];
	printf("Digite os valores:\n");
	for (i=0;i<3;i++)
		scanf("%d", &vet[i]);
	printf("\nValores pares digitados:");
	for (i=0;i<3;i++)
		if (vet[i] % 2 == 0)
			printf("\n%d", vet[i]);
	printf("\nValores impares digitados:");
	for (i=0;i<3;i++)
		if (vet[i] % 2 != 0)
			printf("\n%d", vet[i]);
}
