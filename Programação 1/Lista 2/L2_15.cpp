#include <stdio.h>
main(){
	int num, resto1, resto2, final;
	printf("Digite o valor de 4 digitos:\n");
	scanf("%d", &num);
	resto1 =num % 100;
	resto2 = (num / 100) + resto1;
	final = resto2 * resto2;
	if (final == num)
		printf("Esse valor possui a caracteristica");
	else 
		printf("O valor nao possui a caracteristica");
}

