#include <stdio.h>
main (){
	int i, vet[3], soma = 0, menor, flag = true;
	float media;
	printf("Digite os valores:\n");
	scanf("%d", &vet[0]);
	menor = vet[0];
	for (i=1;i<3;i++){
		scanf("%d", &vet[i]);
		soma += vet[i];
	}
	media = soma / 3.0;
	for (i=0;i<3;i++)
		if (vet[i] > media)
			if (vet[i] <= menor){
				menor = vet[i];
				flag = false;
			}
	if (flag == true)
		printf("A media eh %.2f e nao ha um maior que ela", media);
	else
		printf("A media eh %.2f e o menor numero acima dela eh %d ", media, menor);
}
