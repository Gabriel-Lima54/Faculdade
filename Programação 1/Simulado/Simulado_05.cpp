#include <stdio.h>
main(){
	int v[10], i, soma = 0;
	float media;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("%d", &v[i]);
		soma += v[i];
	}
	media = (float)soma / 10;
	for (i=0;i<10;i++){
		if (v[i] > media){
			printf("\nValor %d eh maior que a media", v[i]);
		}
	}
}
