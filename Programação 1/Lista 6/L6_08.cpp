#include <stdio.h>
main (){
	int n1, n2, i = 0, soma = 0, quo = 0, div = 0;
	printf("Informe o primeiro valor: ");
	scanf("%d", &n1);
	printf("Informe o segundo valor: ");
	scanf("%d", &n2);
	printf("Os numeros primos sao:\n");
	while(1){
		div = 0;
		if (quo > n2)
			break;
		for (i=2;i<=n1/2;i++){
			if (n1 % i == 0)
				div++;
		}
		if (div == 0){
			quo = n1;
			soma += n1;
			printf("%d\n", n1);
		}
		n1++;
	}
	printf("A soma dos numeros primos eh: %d", soma);
}
