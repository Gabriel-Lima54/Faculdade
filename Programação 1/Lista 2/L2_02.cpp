#include <stdio.h>
main(){
	int num;
	printf("Digite um numero:");
	scanf("%d", &num);
	if (num > 0)
		printf("%d eh maior que zero", num);
	if (num < 0)
		printf("%d eh menor que zero", num);
	if (num == 0)
		printf("Valor igual a zero");
	
}
