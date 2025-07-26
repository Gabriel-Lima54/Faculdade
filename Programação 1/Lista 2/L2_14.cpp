#include <stdio.h>
main(){
	float n1, n2;
	char op;
	printf("Digite o primeiro valor:\n");
	scanf("%f", &n1);
	printf("Digite a operacao:\n");
	fflush(stdin);
	op = getchar();
	printf("Digite o segundo valor:\n");
	scanf("%f", &n2);
	if (op == '+')
		printf("%.f + %.f = %.f", n1, n2, n1 + n2);
	else if (op == '-')
		printf("%.f - %.f = %.f", n1, n2, n1 - n2);
	else if (op == '*')
		printf("%.f * %.f = %.f", n1, n2, n1 * n2);
	else if (op == '/' && n2 == 0)
		printf("Divisao por zero!");
	else if (op == '/')
		printf("%.f / %.f = %.f", n1, n2, n1 / n2);
	else
		printf("Operacao invalida");
}
