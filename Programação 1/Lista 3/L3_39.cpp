#include <stdio.h>
main (){
	int cod;
	float salF, totalV, sf, com1, com2;
	
	printf("Digite o codigo do vendedor:\n");
	scanf("%d", &cod);
	printf("Digite o salario fixo:\n");
	scanf("%f", &salF);
	printf("Digite o total das vendas:\n");
	scanf("%f", &totalV);
	
	if (totalV <= 100.000){
		com1 = totalV * 0.01;
		sf = salF + com1;
	}
	else{
		com1 = (totalV - 100000) * 0.03;
		com2 = 100000 * 0.01;
		sf = salF + com1 + com2;
	}
	printf("Codigo do vendedor: %d\n", cod);
	printf("Total de vendas: %.1f\n", totalV);
	printf("Salario fixo: %.2f\n", salF);
	printf("Salario total: %.2f\n", sf);
}
