#include <stdio.h>
main (){
	int valor, resto, invertido = 0, original;
	printf("Informe o valor inteiro de ate 9 digitos: ");
	scanf("%d", &valor);
	original = valor;
	while (valor!=0){
		resto = valor % 10;
		valor = valor / 10;
		invertido = invertido * 10 + resto;
	}
	if (invertido == original)
		printf("\nO numero eh palindromo");
	else
		printf("O numero nao eh palindromo");
}
