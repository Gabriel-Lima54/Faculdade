#include <stdio.h>
main (){
	float alt1, larg1, comp1, alt2, larg2, comp2;
	printf("Digite a altura da primeira caixa:\n");
	scanf("%f", &alt1);
	printf("Digite a largura da primeira caixa:\n");
	scanf("%f", &larg1);
	printf("Digite o comprimento da primeira caixa:\n");
	scanf("%f", &comp1);
	printf("Digite a altura da segunda caixa:\n");
	scanf("%f", &alt2);
	printf("Digite a largura da segunda caixa:\n");
	scanf("%f", &larg2);
	printf("Digite o comprimento da segunda caixa:\n");
	scanf("%f", &comp2);
	
	if (alt1 < alt2 && larg1 < larg2 && comp1 < comp2)
		printf("A primeira caixa pode ser colocada dentro da segunda caixa");
	else 
		printf("As caixas nao encaixam");
}
