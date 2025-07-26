#include <stdio.h>
main (){
	int valor, v[10], i, encontrou = 0;
	printf("Escreva os 10 valores do vetor: ");
	for (i=0;i<10;i++)
		scanf("\n%d", &v[i]);
	printf("Digite o valor a ser encontrado no vetor: ");
	scanf("%d", &valor);
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
	
	
