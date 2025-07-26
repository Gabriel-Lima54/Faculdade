#include <stdio.h>
main (){
	int i, num = 0, vet[11];
	for (i=0;i<11;i++)
		vet[i] = 0;
	printf("Digite os valores de 1 a 10: ");
	while(1){
		scanf("\n%d", &num);
		if (num >= 1 && num<=10){
			vet[num]++;
		}
		else if (num == 0)
			break;
		else if (num < 1 || num > 10) printf("\nValor invalido");
	}
	printf("\nnumeros que nao foram digitados");
	for (i=1;i<11;i++){
		if (vet[i] == 0)
		printf("\n%d", i);
	}
}
