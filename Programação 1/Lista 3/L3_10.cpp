#include <stdio.h>
main(){
	int v1, v2, v3, v4, v5, v6, v7, v8, total;
	printf("Digite o numero de 8 digitos:\n");
	scanf("%d", &total);
	
	v1 = (total / 10000000) % 10;
	v2 = (total / 1000000) % 10;
	v3 = (total / 100000) % 10;
	v4 = (total / 10000) % 10;
	v5 = (total / 1000) % 10;
	v6 = (total / 100) % 10;
	v7 = (total / 10) % 10;
	v8 = (total % 10);
	
	if (v1 == v8 && v2 == v7 && v3 == v6 && v4 == v5)
		printf("Os valores sao um palindromo!");
	else
		printf("Os valores nao sao um palindromo"); 
}
	
