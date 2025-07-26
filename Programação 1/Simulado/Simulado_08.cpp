#include <stdio.h>
main(){
	int v[10], i, aux;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("%d", &v[i]);
	}
	for (i=0;i<5;i++){
		aux = v[i];
		v[i] = v[9-i];
		v[9-i] = aux;
	}
	printf("\nVetor trocado: ");
	for (i=0;i<10;i++){
		printf("%d ", v[i]);
	}
}
