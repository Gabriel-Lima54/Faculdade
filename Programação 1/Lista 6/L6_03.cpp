#include <stdio.h>
main (){
	int num, i, soma;
	printf("Digite um numero: ");
	scanf("%d", &num);
	soma = num + 1;
	for (i=2;i<=num/2;i++){
		if (num % i == 0)
			soma += i;
	}
	printf("A soma dos divisores eh %d", soma);
}
