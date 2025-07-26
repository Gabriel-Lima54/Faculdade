#include <stdio.h>
main (){
	int i, vet[3], menor, pos;
	printf("Digite os valores:\n");
	scanf("%d", &vet[0]);
	menor = vet[0];
	for (i=1;i<3;i++)
		scanf("%d", &vet[i]);
	for (i=0;i<3;i++)
		if (vet[i] <= menor){
			menor = vet[i];
			pos = i;
		}
	printf("\nmenor valor eh %d e sua posicao eh %d", menor, pos);
}
