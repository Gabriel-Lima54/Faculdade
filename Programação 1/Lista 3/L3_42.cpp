#include <stdio.h>
main (){
	int cod;
	float sal, saln, aum;
	
	printf("Digite o codigo do funcionario:\n");
	scanf("%d", &cod);
	printf("Digite o salario atual:\n");
	scanf("%f", &sal);
	
	printf("Codigo do colaborador: %d\n", cod);
	printf("Salario atual: %.2f\n", sal);
	
	if (sal >= 5000){
		aum = sal * 0.30;
		saln = sal + aum;
		printf("Indice de aumento 30%%\n");
	}
	else if (sal >= 4000){
		aum = sal * 0.50;
		saln = sal + aum;
		printf("Indice de aumento 50%%\n");
	}
	else if (sal >= 3000){
		aum = sal * 0.70;
		saln = sal + aum;
		printf("Indice de aumento 70%%\n");
	}
	else if (sal >= 2000){
		aum = sal * 0.80;
		saln = sal + aum;
		printf("Indice de aumento 80%%\n");
	}
	else if (sal >= 1000){
		aum = sal * 0.90;
		saln = sal + aum;
		printf("Indice de aumento 90%%\n");
	}
	else if (sal >= 500){
		aum = sal * 0.95;
		saln = sal + aum;
		printf("Indice de aumento 95%%\n");
	}
	else{
		printf("Indice de aumento 100%%\n");
	}
	
	printf("valor do aumento: %.2f\n", aum);
	printf("Novo salario: %.2f\n", saln);
}
