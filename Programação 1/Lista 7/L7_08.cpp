#include <stdio.h>
main (){
	int i, vet[3], cont = 0;
	printf("Digite os valores:\n");
	for (i=0;i<3;i++)
		scanf("%d", &vet[i]);
	printf("\nValores digitados:");
	for (i=0;i<3;i++){
		if (vet[i] < 0)
			cont++;
		printf("\n%d", vet[i]);
	}
	printf("\nforam informados %d valores nagativos", cont);
}
