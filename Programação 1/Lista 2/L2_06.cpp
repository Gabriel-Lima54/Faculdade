#include <stdio.h>
main(){
	int n1, n2;
	printf("Digite os valores:");
	scanf("%d%d", &n1, &n2);
	if (n1 % n2 == 0)
		printf("Numeros multiplos");
	else
		printf("Numeros nao sao multiplos");
}
  
