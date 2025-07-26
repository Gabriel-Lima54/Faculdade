#include <stdio.h>
main (){
	int i, n;
	i = 1;
	
	while (i == 1){
		printf("Digite o valor: ");
		scanf("%d", &n);
		if (n < 0)
			i = 0;
		else if (n % 2 == 0)
			printf("\nEh um numero par\n");
		}
	}

	
