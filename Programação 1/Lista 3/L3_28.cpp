#include <stdio.h>
main (){
	int dn, mn, an, da, ma, aa;
	
	printf("Digite o dia atual:\n");
	scanf("%d", &da);
	printf("Digite o mes atual:\n");
	scanf("%d", &ma);
	printf("Digite o ano atual:\n");
	scanf("%d", &aa);
	printf("Digite o dia de nascimento:\n");
	scanf("%d", &dn);
	printf("Digite o mes de nascimento:\n");
	scanf("%d", &mn);
	printf("Digite o ano de nascimento:\n");
	scanf("%d", &an);
	
	if (da < dn && ma > mn)
		printf("\nA Pessoa tem %d anos", (aa - an) - 1);
	else 
		printf("\nA APessoa tem %d anos", (aa - an));
	}

