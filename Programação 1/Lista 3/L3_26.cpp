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
		if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12){
			if (dia >= 1 && dia <= 30)
				printf("Nao eh o ultimo dia do mes");
			else 
				printf("Eh o ultimo dia do mes");
		}
		else if (mes == 4 || mes == 6 || mes == 9 || mes == 11){
			if (dia >= 1 && dia <= 29 )
				printf("Nao eh o ultimo dia do mes");
			else 
				printf("Eh o ultimo dia do mes");
		}
		else if (mes == 2){
			if (dia >= 1 && dia <= 27)
				printf("Nao eh o ultimo dia do mes");
			else 
				printf("Eh o ultimo dia do mes");
		}
	}
}
