#include <stdio.h>
main(){
	int peso[5], i, j;
	float alt[5], aux;
	printf("Digite todos os pesos e alturas:\n");
	for (i=0;i<5;i++){
		printf("Peso: ");
		scanf("%d", &peso[i]);
		printf("Altura: ");
		scanf("%f", &alt[i]);
	}
	for (i=0;i<5;i++)
		for(j=0;j<4-i;j++){
			if (alt[j] >= alt[j+1]){
				aux = alt[j];
				alt[j] = alt[j+1];
				alt[j+1] = aux;
				aux = peso[j];
				peso[j] = peso[j+1];
				peso[j+1] = aux;
			}
		}
	printf("\nPesos e alturas organizados:");
    for (i = 0; i < 5; i++)
        printf("\n%.2f - %d", alt[i], peso[i]);
}
