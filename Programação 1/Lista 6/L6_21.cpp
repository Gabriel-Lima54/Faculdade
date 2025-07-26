#include <stdio.h>
main (){
	int valor, resto, cont = 0;
	printf("Informe o valor inteiro de ate 9 digitos: ");
	scanf("%d", &valor);
	while (valor!=0){
		resto = valor % 10;
		valor = valor / 10;
		if (resto % 2 == 0){
			printf("%d", resto);
			cont++;
		}
	}
	if (cont == 0)
		printf("O valor so tem numeros impares");
}
