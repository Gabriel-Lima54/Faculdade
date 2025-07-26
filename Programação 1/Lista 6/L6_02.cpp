#include <stdio.h>
main (){
	int num, i, cont = 2;
	printf("Digite um numero: ");
	scanf("%d", &num);
	for (i=2;i<=num/2;i++){
		if (num % i == 0)
			cont++;
	}
	printf("numero de divisores de %d: %d", num, cont);
}
