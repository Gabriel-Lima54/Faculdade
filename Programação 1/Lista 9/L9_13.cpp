#include <stdio.h>
main(){
	int v[10], v2[10], i, aux = 0;
	printf("Digite os 10 valores do primeiro vetor:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nDigite os 10 valores do segundo vetor:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v2[i]);
	for (i=0;i<10;i++){
		aux = v[i];
		v[i] = v2[9 - i];
		v2[9-i] = aux;
	}
	printf("\nVetor A trocado: ");
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
	printf("\nVetor B trocado: ");
	for (i=0;i<10;i++)
		printf("%d ", v2[i]);
}
