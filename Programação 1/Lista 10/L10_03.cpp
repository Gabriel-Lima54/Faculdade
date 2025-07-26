#include <stdio.h>
main(){
	int v[10], i, j, aux = 0;
	printf("Digite os valores:\n");
	for(i=0;i<10;i++)
		scanf("%d", &v[i]);
	for (i=0;i<10;i++){
		for(j=0;j<9-i;j++){
			if (v[j] < v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
	printf("\nVetor organizado: ");
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
}
