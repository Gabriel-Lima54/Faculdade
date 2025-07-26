#include <stdio.h>
main (){
	int i, n, v;
	printf("Digite o numero de valores:\n");
	scanf("%d", &n);
	for  (i=1;i<=n;i++){
		printf("\nDigite um valor:\n");
		scanf("%d", &v);
		if (v % 2 != 0)
			printf("numero impar");
	}
}
