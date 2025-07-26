#include <stdio.h>
main (){
	int valor, resto, cont = 0;
	int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
	printf("Informe o valor inteiro: ");
	scanf("%d", &valor);
	while (valor!=0){
		resto = valor % 10;
		valor = valor / 10;
		switch (resto)
		{
			case (1): n1++; break;
			case (2): n2++; break;
			case (3): n3++; break;
			case (4): n4++; break;
			case (5): n5++; break;
			case (6): n6++; break;
			case (7): n7++; break;
			case (8): n8++; break;
			case (9): n9++; break;
		}
	}
	if (n1>1||n2>1||n3>1||n4>1||n5>1||n6>1||n7>1||n8>1||n9>1)
		printf("\nO numero contem digitos repetidos");
	else
		printf("\nO numero nao contem digitos repetidos");
}
