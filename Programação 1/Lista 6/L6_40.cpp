#include <stdio.h>
#include <math.h>
main (){
	int x, deno = 1, i, y;
	double soma = 0, fato;
	printf("Digite o valor: ");
	scanf("%d", &x);
		for (i=0;i<=200;i++){
			fato = 1.0;
			for (y=2;y<=i;y++)
				fato *= y;
			deno = fato;
			soma += pow(x, i) / deno;
		}
	printf("e^%d = %.2f ", x, soma);
}
