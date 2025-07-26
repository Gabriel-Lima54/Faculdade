#include <stdio.h>
main (){
	int i, n, soma = 0, quant = 0;
	float media;
		
	for (i=1;i<=15;i++){
		printf("Digite um valor:\n");
		scanf("%d", &n);
		if (n % 2 == 1){
			quant++;
			soma += n;
		}
	}
	media = soma / quant;
	printf("a media dos valores impares os valores eh %.2f\n", media);
	}
	
