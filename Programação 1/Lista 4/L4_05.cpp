#include <stdio.h>
main (){
	int i, n;
	
	for (i=1;i<=10;i++){
		printf("\nDigite o valor: ");
		scanf("%d", &n);
		if (n % 2 == 0)
			printf("\nEh um numero par\n");
	}
}
