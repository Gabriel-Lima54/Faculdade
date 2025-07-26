#include <stdio.h>
main (){
	float alt1, larg1, comp1, alt2, larg2, comp2, temp;
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
	
	if (alt1 >= larg1){
		temp = larg1;
		larg1 = alt1;
		alt1 = temp;
	}
	if (alt1 >= comp1){
		temp = comp1;
		comp1 = alt1;
		alt1 = temp;
	}
	if (larg1 >= comp1){
		temp = comp1;
		comp1 = larg1;
		larg1 = temp;
	}
		
	if (alt2 >= larg2){
		temp = larg2;
		larg2 = alt2;
		alt2 = temp;
	}
	if (alt2 >= comp2){
		temp = comp2;
		comp2 = alt2;
		alt2 = temp;
	}
	if (larg2 >= comp2){
		temp = comp2;
		comp2 = larg2;
		larg2 = temp;
	}
	
	if (alt1 < alt2 && larg1 < larg2 && comp1 < comp2)
		printf("A primeira caixa encaixa dentro da segunda caixa");
	else 
		printf("As caixas nao se encaixam");
}
	
	
