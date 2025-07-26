#include <stdio.h>
main (){
	int valor, v[10], i, encontrou;
	printf("Escreva os 10 valores do vetor: ");
	for (i=0;i<10;i++)
		scanf("\n%d", &v[i]);
	printf("Digite os 3 valores a ser encontrado no vetor: ");
	for (i=0;i<=3;i++){
		printf("\nDigite o valor: ");
		scanf("\n%d", &valor);
		encontrou = 0;
		for (i=0;i<10;i++){
			if (valor == v[i]){
				encontrou = 1;
				break;
			}
		}
		if (encontrou == 1)
			printf("O valor %d esta no vetor", valor);
		else
			printf("O valor %d NAO esta no vetor", valor);
	}
}
