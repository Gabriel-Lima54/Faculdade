#include <stdio.h>
main (){
	int valor,x,soma, i;
	for (x=1;x<=10;x++){
		printf("Escreva um valor: ");
		scanf("%d", &valor);
			soma = 0;
			for (i=1;i<valor;i++)
				if(valor % i == 0)
					soma += i;
			if (soma == valor)
				printf("\n%d eh um valor perfeito\n", valor);
			else
				printf("\n%d nao eh um numero perfeito\n", valor);
		}
	}

