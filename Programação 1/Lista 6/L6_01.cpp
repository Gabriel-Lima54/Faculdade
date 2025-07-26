#include <stdio.h>
main (){
	int num, i;
	printf("Digite um numero: ");
	scanf("%d", &num);
	printf("Divisores do numero %d:\n1\n",num);
	for (i=2i<=num;i++){
		if (num % i == 0)
			printf("%d\n", i);
	}
}
