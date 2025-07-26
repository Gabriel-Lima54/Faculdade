#include <stdio.h>
main(){
	int z[20], v[10], w[10], i, j, aux;
	printf("Digite os 10 valores de V:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("Digite os 10 valores de W:\n");
	for (i=0;i<10;i++)
		scanf("%d", &w[i]);
	for (i=0;i<10;i++)
		for(j=0;j<9-i;j++)
			if (v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
	for (i=0;i<10;i++)
		for(j=0;j<9-i;j++)
			if (w[j] > w[j+1]){
				aux = w[j];
				w[j] = w[j+1];
				w[j+1] = aux;
			}
	for (i=0;i<10;i++)
		z[i] = v[i];
	for(i=0;i<10;i++)
		z[10+i] = w[i];
	for (i=0;i<20;i++)
		for (j=0;j<19-i;j++)
			if (z[j] > z[j+1]){
				aux = z[j];
				z[j] = z[j+1];
				z[j+1] = aux;
			}
	printf("Vetor Z: ");
	for (i=0;i<20;i++)
		printf("%d ", z[i]);
}
