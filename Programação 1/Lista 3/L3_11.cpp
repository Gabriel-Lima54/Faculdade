#include <stdio.h>
main(){
	int total1, total2, v1, v2, v3, v4, v5, v6, cont = 0;
	printf("Digite os dois numeros de tres digitos:\n");
	scanf("%d%d", &total1, &total2);
	
	v1 = total1 / 100;
	v2 = (total1 / 10) % 10;
	v3 = total1 % 10;
	v4 = total2 / 100;
	v5 = (total2 / 10) % 10;
	v6 = total2 % 10;
	
	if (v1 == v4 || v1 == v5 || v1 == v6)
		cont++;
	if (v2 == v4 || v2 == v5 || v2 == v6)
		cont++;
	if (v3 == v4 || v3 == v5 || v3 == v6)
		cont++;
		
	if (cont == 0) 
		printf("Todos valores sao diferentes");
		else
			printf("%d dos numeros sao iguais", cont);
}
