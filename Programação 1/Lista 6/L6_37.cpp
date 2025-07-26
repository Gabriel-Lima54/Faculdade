#include <stdio.h>
main (){
	float soma = 0;
	int valor, primo, deno, cont = 0, num = 2, x;
	printf("Digite o numero escolhido: ");
	scanf("%d", &valor);
	while(1){
		primo = 1;
		if (cont == valor) 
			break;
		for(x=2;x*x<=num;x++)
			if (num % x == 0)
				primo = 0;
		if (primo == 1){
			deno = num;
			cont++;
			soma += 1.0 / deno;
		}
		num++;
	}
	printf("O valor da soma total eh: %.2f", soma);
}
