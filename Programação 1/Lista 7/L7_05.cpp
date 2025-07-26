#include <stdio.h>
main (){
	int i, vet[3];
	printf("Digite os valores:\n");
	for (i=0;i<3;i++)
		scanf("%d", &vet[i]);
	printf("\nValores primos:");
	for (i=2;i * i <= vet[i];i++)
		if (vet[i] % i == 0)
			printf("\n%d", vet[i]);
}
