#include <stdio.h>
main (){
	int i, n;
	printf("Digite o numero de repeticoes:\n");
	scanf("%d", &n);
	printf("Valores de 1 a %d :\n", n);
	for  (i=1;i<=n;i++)
		printf("%d\n", i);
}
