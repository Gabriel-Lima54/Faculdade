#include <stdio.h>
main (){
	float valc, valt;
	char cliente;
	
	fflush(stdin);
	
	printf("Digite o codigo do cliente:");
	cliente = getchar();
	printf("Digite o valor da compra:");
	scanf("%f", &valc);
	
	if (cliente == 'c' || cliente == 'C')
		printf("O valor da compra eh de: %.2f", valc);
	
	else if (cliente == 'F' || cliente == 'f'){
		valt = valc - (valc * 0.05);
		printf("O valor da compra eh de: %.2f", valt);
	}
	else if (cliente == 'E' || cliente == 'e'){
		valt = valc - (valc * 0.10);
		printf("O valor da compra eh de: %.2f", valt);
	}
	else 
		printf("Codigo de cliente incorreto");
}
