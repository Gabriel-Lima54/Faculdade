#include <stdio.h>
main (){
	int l1, l2, l3;

	printf("Digite os tres lados do triangulo:\n");
	scanf("%d%d%d", &l1, &l2, &l3);

	if ((l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l3)){
		if (l1 == l2 && l2 == l3)
			printf("O triangulo eh equilatero");
		else if ((l1 == l2 && l2 != l3) || (l1 == l3 && l3 != l2) || (l2 == l3 && l2 != l1))
			printf("O triangulo eh isosceles ");
		else if (l1 != l2 && l2 != l3 && l3 != l1)
			printf("O triangulo eh escaleno");
	}
	else
		printf("A figura nao eh um triangulo");
}
