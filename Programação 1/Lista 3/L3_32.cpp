#include <stdio.h>
main (){
	int he, hs, total, valor = 0;
	
	printf("Digite a hora de entrada no estacionamento:");
	scanf("%d", &he);
	printf("Digite a hora de saida do estacionamento:");
	scanf("%d", &hs);
	
	total = hs - he;
	
	if ((total - 1) >= 0){
		total = total - 1;
		valor = valor + 5;
	}
	if ((total - 1) >= 0){
		total = total - 1;
		valor = valor + 5;
	}
	if ((total - 1) >= 0){
		total = total - 1;
		valor = valor + 2;
	}
	if ((total - 1) >= 0){
		total = total - 1;
		valor = valor + 2;
	}
	if (total >= 0)
		valor = valor + total;
	
	printf("O motorista deve pagar %d reais", valor);
}
