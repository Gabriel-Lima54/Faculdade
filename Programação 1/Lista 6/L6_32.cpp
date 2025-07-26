#include <stdio.h>
main (){
	int valor, posicao = 0, primeiro = 0, segundo = 1, soma;
	printf("nforme o valor da posicao: ");
	scanf("%d", &valor);
	while (1){
		soma = primeiro + segundo;
		posicao++;
		if (posicao == valor){
			printf("O numero na posicao %d eh %d", posicao, primeiro);
		}
		primeiro = segundo;
		segundo = soma;
	}
}
