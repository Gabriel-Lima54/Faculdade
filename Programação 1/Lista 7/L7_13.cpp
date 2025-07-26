#include <stdio.h>
main (){
	int i, vet[3], pos;
	printf("Digite os valores:\n");
	for (i=0;i<3;i++)
		scanf("%d", &vet[i]);
	printf("\nOs numeros pares sao:");
	for (i=0;i<3;i++){
		if (vet[i] % 2 == 0){
			pos = i;
			printf("\nnumero %d - posicao %d", vet[i], pos);
		}
	}
	printf("\nOs numeros impares sao:");
	for (i=0;i<3;i++){
		if (vet[i] % 2 != 0){
			pos = i;
			printf("\nnumero %d - posicao %d", vet[i], pos);
		}
	}
}
