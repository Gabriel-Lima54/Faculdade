#include <stdio.h>
main(){
	int estoq, forn;
	
	printf("Digite a quantidade em estoque:\n");
	scanf("%d", &estoq);
	printf("Digite a total a ser fornecido:\n");
	scanf("%d", &forn);
	
	if (estoq >= forn)
		printf("O estoque atual eh: %d", estoq - forn);
	else
		printf("Nao temos itens suficientes, faltam %d itens", forn - estoq);
}
