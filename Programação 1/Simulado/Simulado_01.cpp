#include <stdio.h>
main(){
	int v[10], i;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("Valores normais: ");
	for(i=0;i<10;i++)
		printf ("%d ", v[i]);
	printf("Valores inversos: ");
	for (i=0;i<10;i++)
		printf("%d ", v[9-i]);
}
