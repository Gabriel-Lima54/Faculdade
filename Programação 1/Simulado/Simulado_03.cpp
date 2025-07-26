#include <stdio.h>
main(){
	int v[10], i, cont = 0, soma = 0;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	for(i=0;i<10;i++){
		if (v[i] < 0){
			cont++;
		}
		else{
			soma += v[i];
		}
	}
	printf("\nQuant de negativos: ");
	printf("%d", cont);
	printf("\nSoma dos positivos: ");
	printf("%d", soma);
}
