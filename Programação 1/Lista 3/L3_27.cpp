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
	
	if (dn == da && mn == ma && ((aa - an) >= 18))
		printf("\nPessoa maior de idade, feliz aniversario"); 
	else if (dn == da && mn == ma && ((aa - an) <= 18))
		printf("\nPessoa menor de idade, feliz aniversario"); 
	else if ((aa - an) >= 18 && da >= dn)
		printf("\nPessoa maior de idade");
	else 
		printf("\nPessoa menor de idade");
	}

