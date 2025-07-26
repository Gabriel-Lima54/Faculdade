#include <stdio.h>
main(){
	int v[10], v2[10], vt[20], i;
	printf("Digite os 10 valores do primeiro valor:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nDigite os 10 valores do segundo valor:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v2[i]);
	for (i=0;i<10;i++){
		vt[2 * i] = v[i];
		vt[2 * i + 1] = v2[i];
	}
	printf("\nVetor intercalado: ");
	for (i=0;i<20;i++)
		printf("%d ",vt[i]);
}
