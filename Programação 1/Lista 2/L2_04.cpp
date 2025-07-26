#include <stdio.h>
main(){
	int n1, n2, n3, cont = 0;
	printf("Digite os valores:");
	scanf("%d%d%d", &n1, &n2, &n3);
	if (n1 % 2 == 1)
		cont++;
	if (n2 % 2 == 1)
		cont++;
	if (n3 % 2 == 1)
		cont++;
	printf("Temos %d numeros inteiros",cont);
}
	
  
