#include <stdio.h>
#include <math.h>
main (){
	int s, num, i, y, z, x;
	double soma = 0, fat, pot;
	printf("Digite o valor inteiro: ");
	scanf("%d", &x);
	printf("Digite a posicao: ");
	scanf("%d", &num);
	for (i=1;i<=num;i++){
		fat = 1.0;
		for(y=1;y<=i;y++){
			fat *= y;
		}
		pot = pow(x, i);
		if (x % 2 == 0){
			soma += pot / fat;
		}
		else{
			soma -= pot / fat;
		}
	}
	printf("O valor de S eh %.2f", soma);
}
