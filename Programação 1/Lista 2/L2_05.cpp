#include <stdio.h>
main(){
	int n1, n2, n3, soma = 0;
	printf("Digite os valores:");
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 % 2 == 0)
	    soma+=n1;
	if (n2 % 2 == 0)
		soma+=n2;
	if (n3 % 2 == 0)
		soma+=n3;
	printf("A soma dos pares eh %d",soma);
}
	
  
