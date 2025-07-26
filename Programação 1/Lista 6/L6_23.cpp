#include <stdio.h>
main (){
	int valor, resto, ultimo = 99999;
	printf("Informe o valor inteiro de ate 9 digitos: ");
	scanf("%d", &valor);
	while (1){
		resto = valor % 10;
		valor = valor / 10;
		if (resto >= ultimo){
			printf("O valor nao eh ascendente");
			break;
		}
		else
			ultimo = resto;
		if (valor <= 0){
			printf("O valor eh ascendente");
			break;
		}
	}
}
