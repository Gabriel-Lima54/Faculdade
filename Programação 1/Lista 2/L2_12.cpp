#include <stdio.h>
main(){
	int cod, a, b, c, res;
	printf("Digite os tres valores:   ");
	scanf("%d%d%d", &a, &b, &c);
	printf("Digite o codigo:");
	scanf("%d", &cod);
	if (cod == 1) {
		res = (a * b)*c;
		printf("Resultado da multiplicacao: %d", res);
	}
	else if (cod == 2) {
		res = a + b + c;
		printf("Resultado da soma: %d", res);
	}
	else if (cod == 3) {
		res = a - b - c;
		printf("Resultado da subtracao: %d", res);
	}
	else if (cod == 4) {
		res = (c * c)+(b * b)+(c * c);
		printf("Resultado da soma ao cubo: %d", res);
	}
	else 
		printf("Codigo invalido, digite apenas valores de 1 a 4");
}
