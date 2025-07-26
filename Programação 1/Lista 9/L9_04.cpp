#include <stdio.h>
main(){
	int i, v[10], aux;
	printf("Digite 10 valores inteiros:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nValores antes da troca: ");
	for (i=0;i<10;i++)
		printf("%d  ",v[i]);
	for (i=0;i<10;i+=2){
		aux = v[i];
		v[i] = v[i + 1];
		v[i + 1] = aux;
	}
	printf("\nValores depois da troca: ");
	for (i=0;i<10;i++)
		printf("%d  ",v[i]);
}
