#include <stdio.h>
main(){
	int n1, n2;
	printf("Digite os valores:");
	scanf("%d%d", &n1, &n2);
    if (n1 == n2)
    	printf("Os valores sao iguais");
    else if (n1 > n2)
    	printf("Maior valor: %d", n1);
    else 
    	printf("Maior valor: %d", n2);
}
  
