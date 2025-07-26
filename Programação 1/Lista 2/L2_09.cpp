#include <stdio.h>
main(){
	float n1, n2;
	printf("Digite os valores:");
	scanf("%f%f", &n1, &n2);
    if (n1 == n2)
    	printf("Valores iguais");
    else if (n1 < n2)
    	printf("Valores em ordem crescente: %.2f - %.2f", n1, n2);
    else
    	printf("Valores em ordem crescente: %.2f - %.2f", n2, n1);
    }
