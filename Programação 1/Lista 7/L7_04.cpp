#include <stdio.h>
main (){
	int i, vet[3];
	printf("Digite os valores:\n");
	for (i=0;i<3;i++)
		scanf("%d", &vet[i]);
	printf("\nValores menores que zero:");
	for (i=0;i<3;i++)
		if (vet[i] < 0)
			printf("\n%d",vet[i]);
}
