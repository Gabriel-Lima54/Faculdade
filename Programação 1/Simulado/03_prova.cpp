#include <stdio.h>
main (){
	int horE, horS, hors, min, cat, tp;
	printf("Digite a hora de entrada do cliente, use o formato HHMM:");
	scanf("%d", &horE);
	printf("Digite o horario de saida do cliente, use o formato HHMM:");
	scanf("%d", &horS);
	
	tp = horS - horE;
	hors = tp / 100;
	min = tp % 100;
	cat = hors * 60 + min;
	
	printf("Tempo de permanencia:%d:%d\n", hors, min);
	
	if (cat < 15)
		printf("Categoria: curta");
	else if (cat > 15 && cat < 60)
		printf("Categoria: moderada");
	else if (cat > 61 && cat < 90)
		printf("Categoria: longa");
	else if (cat > 90 && cat < 180)
		printf("Categoria: muito longa");
	else
		printf("Categoria: extremamente longa");
}

