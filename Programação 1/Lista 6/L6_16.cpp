#include <stdio.h>
main (){
	int valor, i, resto, inteiro;
	printf("Informe o valor inteiro: ");
	scanf("%d", &valor);
	inteiro = valor;
	while (inteiro!=0){
		resto = inteiro % 10;
		inteiro /= 10;
		printf("%d, ", resto);
	}
}
