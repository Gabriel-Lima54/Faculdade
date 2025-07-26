#include <stdio.h>
main (){
	int dia, mes, ano;
	
	printf("Digite o dia:\n");
	scanf("%d", &dia);
	printf("Digite o mes:\n");
	scanf("%d", &mes);
	printf("Digite o ano:\n");
	scanf("%d", &ano);
	
	dia++;
	
	if (dia >= 33 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10))
		printf("Data invalida");
	else if (dia >= 32 && (mes == 4 || mes == 6 || mes == 9))
		printf("Data invalida");
	else if (dia >= 30 && mes == 2)
		printf("Data invalida");	
	else{
		if (dia == 32 && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10)){
		mes++;
		dia = 1;
		}
		else if (dia == 31 && (mes == 4 || mes == 6 || mes == 9 || mes == 10)){
			mes++;
			dia = 1;
		}
		else if (dia == 29 && (mes == 10)){
			mes++,
			dia = 1;
		}
		else if (dia == 32 && mes == 12){
			ano++;
			dia = 1;
			mes = 1;
		}
		printf("\n%d / %d / %d", dia, mes, ano);
	}
}
