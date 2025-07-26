#include <stdio.h>
main (){
	int i;
	float soma = 0, valor;
	printf("Digite o valor: ");
	scanf("%f", &valor);
	for (i=1;i<=5;i++){
		soma += 1.0 / valor;
		valor += 2;
		printf("VALOR %f\n", valor);
	}
	printf("A soma doas 5 primeiros termos eh %.2f", soma);
}
