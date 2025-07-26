#include <stdio.h>
main (){
	int i, vet[3], soma = 0;
	float media;
	printf("Digite os valores:\n");
	for (i=0;i<3;i++){
		scanf("%d", &vet[i]);
		soma += vet[i];
	}
	media = soma / 3.0;
	printf("A media eh %.2f e os numeros acima dela sao: ", media);
	for (i=0;i<3;i++)
		if (vet[i] > media)
			printf("%d  ", vet[i]);
}
