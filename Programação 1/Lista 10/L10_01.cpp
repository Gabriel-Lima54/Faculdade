#include <stdio.h>
main(){
	int v[10], i, aux, j;
	printf("Escreva os 10 elementos:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	for (i=0;i<10;i++){
		if (v[i] > v[i+1]){
			aux = v[i];
            v[i] = v[i + 1];
            v[i + 1] = aux;
        }
	}
	printf("\nVetor organizado: ");
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
}
