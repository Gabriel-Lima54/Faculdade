#include <stdio.h>
main (){
	int valor, resto, cont = 0;
	int n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0;
	printf("Informe o valor inteiro: ");
	scanf("%d", &valor);
	while (valor!=0){
		resto = valor % 10;
		valor = valor / 10;
		switch (resto)
		{
			case (0): n0++; break;
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
	if (n0>0) printf ("O digito 0 apareceu %d vezes\n",n0);
	if (n1>0) printf ("O digito 1 apareceu %d vezes\n",n1);
	if (n2>0) printf ("O digito 2 apareceu %d vezes\n",n2);
	if (n3>0) printf ("O digito 3 apareceu %d vezes\n",n3);
	if (n4>0) printf ("O digito 4 apareceu %d vezes\n",n4);
	if (n5>0) printf ("O digito 5 apareceu %d vezes\n",n5);
	if (n6>0) printf ("O digito 6 apareceu %d vezes\n",n6);
	if (n7>0) printf ("O digito 7 apareceu %d vezes\n",n7);
	if (n8>0) printf ("O digito 8 apareceu %d vezes\n",n8);
	if (n9>0) printf ("O digito 9 apareceu %d vezes\n",n9);
}
