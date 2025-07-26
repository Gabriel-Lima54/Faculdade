#include <stdio.h>
main(){
	int v[10], i, n, flag = 0;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("%d", &v[i]);
	}
	printf("\nDigite o valor N: ");
	scanf("%d", &n);
	for (i=0;i<10;i++){
		if (v[i] == n){
			printf("\nValor encontrado na posicao %d", i);
			flag = 1;
		}
	}
	if (flag == 0)
		printf("\nValor nao encontrado");
}
