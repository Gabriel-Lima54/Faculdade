#include <stdio.h>
main(){
	int v[10], i, vi[10];
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	for (i=0;i<10;i++){
		vi[i] = v[9 - i];
	}
	printf("\nValores digitados:");
	for (i=0;i<10;i++)
		printf("\n%d - %d ", v[i], vi[i]);
}
