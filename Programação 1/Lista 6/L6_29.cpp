#include <stdio.h>
main (){
	int dia, mes, semana, invalido = 1, sextas = 0;
	
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
		while(sextas < 3){
			
			if (semana == 6 && dia == 13){
				printf("%d / %d\n", dia, mes);
				sextas++;
			}
			
			semana++;
			dia++;
			
			if (semana > 7)
				semana = 1;
				
			if (mes == 1 || mes == 3 || mes == 5 || mes == 8 || mes == 10)
				if (dia > 31){
					dia = 1;
					mes++;
				}
			else if (mes == 4 || mes == 6 || mes == 7 || mes == 9 || mes == 11)
				if (dia > 30){
					dia = 1;
					mes++;
				}
			else if (mes == 2)
				if (dia > 28){
					dia = 1;
					mes++;
				}
			if (mes > 12)
				mes = 1;
		}
	}
}
