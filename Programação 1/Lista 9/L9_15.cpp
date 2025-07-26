#include <stdio.h>
main(){
	int v[10], i, total = 0;
	float v2[10];
	printf("Digite os 10 valores do vetor:\n");
	for (i=0;i<10;i++){
		scanf("%d", &v[i]);
		total += v[i];
	}
	for (i=0;i<10;i++){
		v2[i] = (float)v[i] / total * 100;
	}
	printf("\nVetor das porcentagens: ");
	for (i=0;i<10;i++)
		printf("\n%.2f%% ", v2[i]);
}
