#include <stdio.h>
main (){
	int i, n, cont = 0;
	
	for (i=1;i<=15;i++){
		printf("Digite um valor:\n");
		scanf("%d", &n);
		if (n >= 10 and n <= 20)
			cont++;
	}
	printf("Foram informados %d valores entre 10 e 20", cont);
	}
	
