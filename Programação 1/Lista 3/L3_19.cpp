#include <stdio.h>
main (){
	int l1, l2, l3, temp;

	printf("Digite os tres lados do triangulo:\n");
	scanf("%d%d%d", &l1, &l2, &l3);

	if (l1 >= l2){
		temp = l2;
		l2 = l1;
		l1 = temp;
	}
	if (l1 >= l3){
		temp = l3;
		l3 = l1;
		l1 = temp;
	}
	if (l2 >= l3){
		temp = l3;
		l3 = l2;
		l2 = temp;
	}
		
	if (l3 < l1 + l2){
		if (l3 * l3 == l1 * l1 + l2 * l2){
			if (l1 == l2 && l2 == l3)
				printf("O triangulo eh retangulo equilatero");
			else if (l1 == l2 || l1 == l3 || l2 == l3)
				printf("O triangulo eh retangulo isosceles");
			else
				printf("O triangulo eh retangulo escaleno");
		}
		else if (l3 * l3 > l1 * l1 + l2 * l2){
				if (l1 == l2 && l2 == l3)
					printf("O triangulo eh obtusangulo equilatero");
				else if (l1 == l2 || l1 == l3 || l2 == l3)
					printf("O triangulo eh obtusangulo isosceles");
				else
					printf("O triangulo eh obtusangulo escaleno");
				}
		else if (l3 * l3 < l1 * l1 + l2 * l2){
				if (l1 == l2 && l2 == l3)
					printf("O triangulo eh acutangulo equilatero");
				else if (l1 == l2 || l1 == l3 || l2 == l3)
					printf("O triangulo eh acutangulo isosceles");
				else
					printf("O triangulo eh acutangulo escaleno");
				}
	}
	else
		printf("nao eh triangulo");
}
