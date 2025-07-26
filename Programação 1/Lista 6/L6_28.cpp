#include <stdio.h>
main (){
	int dia, mes, semana, invalido = 1;
	printf("Informe o dia e o mes:\n");
	scanf("%d%d", &dia, &mes);
	if (mes == 1 || mes == 3 || mes == 5 || mes == 8 || mes == 10 || mes == 12)
		if (dia > 31)
			invalido = 0;
	else if (mes == 4 || mes == 6 || mes == 7 || mes == 9 || mes == 11)
		if (dia > 30)
			invalido = 0;
	else if (mes == 2)
		if (dia > 28)
			invalido = 0;
	if (invalido == 0)
		printf("O valor inserido eh invalido");
	else{
		printf("Digite o dia da semana, de 1 a 7: ");
		scanf("%d", &semana);
		while(1){
			semana--;
			dia--;
			if (semana == 0)
				semana = 7;
			if (dia == 1) break;
		}
	}
	switch(semana)
	{
		case(1): printf("O dia eh segunda"); break;
		case(2): printf("O dia eh terca"); break;
		case(3): printf("O dia eh quarta"); break;
		case(4): printf("O dia eh quinta"); break;
		case(5): printf("O dia eh sexta"); break;
		case(6): printf("O dia eh sabado"); break;
		case(7): printf("O dia eh domingo"); break;
	}
}
