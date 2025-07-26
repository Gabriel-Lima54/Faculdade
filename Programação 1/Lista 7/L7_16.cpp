#include <stdio.h>
main (){
	int valor, v[10], i, encontrou = 0, pos = 0;
	printf("Escreva os 10 valores do vetor: ");
	for (i=0;i<10;i++)
		scanf("\n%d", &v[i]);
	printf("Digite o valor a ser encontrado no vetor: ");
	scanf("%d", &valor);
	for (i=0;i<10;i++){
		if (valor == v[i]){
			encontrou = 1;
			pos = i;
			break;
		}
	}
	if (encontrou == 1)
		printf("O valor %d esta no vetor, na posicao %d", valor, pos);
	else
		printf("O valor %d NAO esta no vetor", valor);
}
