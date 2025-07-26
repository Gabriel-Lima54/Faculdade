#include <stdio.h>
main(){
	int p,r,soma, v[20], i = 1, ii = 0, ip = 0;
	printf("Digite o primeiro termo: ");
	scanf("%d", &p);
	v[0] = p;
	printf("\nDigite a razao: ");
	scanf("%d", &r);
	while (i<20){
		soma = 0;
		soma = p + r;
		p = soma;
		v[i] = p;
		i++;
	}
	printf("\nNumeros pares: ");
	for (i=0;i<20;i++){
		if (v[i] % 2 == 0)
			printf("%d ", v[i]);
	}
	printf("\nNumeros impares: ");
	for (i=0;i<20;i++){
		if (v[i] % 2 != 0)
			printf("%d ", v[i]);
	}
}
