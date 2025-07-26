#include <stdio.h>
main (){
	int valor, resto, soma = 0;
	printf("Informe o valor inteiro: ");
	scanf("%d", &valor);
	while (valor!=0){
		resto = valor % 10;
		valor = valor / 10;
		soma += resto;
	}
	printf("A soma dos numeros formantes eh %d", soma);
