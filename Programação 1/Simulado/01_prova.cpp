#include <stdio.h>
main (){
	int codP, codB, quantP, quantB;
	float valP = 0, valB = 0;
	
	printf("Digite o codigo do prato:\n");
	scanf("%d", &codP);
	printf("Digite a quantidade dos pratos:\n");
	scanf("%d", &quantP);
	printf("Digite o codigo das bebidas:\n");
	scanf("%d", &codB);
	printf("Digite a quantidade de bebidas:\n");
	scanf("%d", &quantB);
	
	if (codP == 1)
		valP = 39.99 * quantP;
	else if (codP == 2)
		valP = 45 * quantP;
	else if (codP == 3)
		valP = 120 * quantP;
	else if (codP == 4)
		valP = 45 * quantP;
	else if (codP == 5)
		valP = 39 * quantP;
	else
		printf("Codigo invalido");
		
	if (codB == 0 || valP > 250)
		valB = 0;
	else if (codB == 1)
		valB = 5 * quantB;
	else if (codB == 2)
		valB = 3 * quantB;
	else if (codB == 3)
		valB = 7 * quantB;
	else if (codB == 4)
		valB = 10 * quantB;
	else
		printf("Codigo invalido");
		
	printf("Quantidade dos pratos: %d", quantP);
	printf("\nValor total dos pratos: %.2f", valP);
	printf("\nQuantidade de bebidas: %d", quantB);
	printf("\nValor total das bebidas: %.2f", valB);
	printf("\nValor total do pedido: %.2f", valP + valB);
}
