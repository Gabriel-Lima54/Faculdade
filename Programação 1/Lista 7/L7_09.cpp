#include <stdio.h>
main (){
	int i, vet[3], maior;
	printf("Digite os valores:\n");
	scanf("%d", &vet[0]);
	maior = vet[0];
	for (i=1;i<3;i++)
		scanf("%d", &vet[i]);
	for (i=0;i<3;i++)
		if (vet[i] >= maior)
			maior = vet[i];
	printf("\nMaior valor eh %d", maior);
}
