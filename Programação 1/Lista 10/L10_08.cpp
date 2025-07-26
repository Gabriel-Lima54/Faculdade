#include <stdio.h>
main(){
	int v[10], vo[10], cont = 0, i, j;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	for (i=0;i<10;i++){
		cont = 0;
		for (j=0;j<10;j++){
			if (v[i] > v[j]){
				cont++;
			}
		}
		vo[cont] = v[i];	
	}
	printf("\nVetor ordenado:\n");
    for (i = 0; i < 10; i++)
        printf("%d ", vo[i]);
}
