#include <stdio.h>
main (){
	int n1, n2, i, soma1 = 1, soma2 = 1;
	printf("Digite o primeiro valor: ");
	scanf("%d", &n1);
	printf("Digite o segundo valor: ");
	scanf("%d", &n2);
	for (i=2;i<=n1/2;i++){
		if (n1 % i == 0)
			soma1 += i;
	}
	for (i=2;i<=n2/2;i++){
		if (n2 % i == 0)
			soma2 += i;
	}
	if (soma1 == n2 && soma2 == n1)
		printf("Os valores sao amigos");
	else
		printf("Os valores nao sao amigos");
}

