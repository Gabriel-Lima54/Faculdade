#include <stdio.h>
main(){
	int v1, v2, v3, v4, v5, v6, soma = 0;
	printf("Digite os valores:\n");
	scanf("%d%d%d%d%d%d", &v1, &v2, &v3, &v4, &v5, &v6);
	
	if (v1 % 2 == 0)
		soma += v1;
	if (v2 % 2 == 0)
		soma += v2;
	if (v3 % 2 == 0)
		soma += v3;
	if (v4 % 2 == 0)
		soma += v4;
	if (v5 % 2 == 0)
		soma += v5;
	if (v6 % 2 == 0)
		soma += v6;
	printf("A soma dos numeros pares digitados eh: %d", soma);
}
