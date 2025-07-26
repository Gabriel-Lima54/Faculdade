#include <stdio.h>
main (){
	int i, n, soma = 0;
	
	for (i=1;i<=15;i++){
		printf("Digite um valor:\n");
		scanf("%d", &n);
		soma = soma += n;
	}
	printf("a soma de todos os valores eh %d\n", soma);
	}
	
