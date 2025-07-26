#include <stdio.h>
main (){
	int i = 0, v[64], num, quo = 1, resto = 0, j;
	printf("Digite o numero a ser transformado em binario: ");
	scanf("%d", &num);
	quo = num;
	while (quo != 0){
		resto = quo % 2;
		quo = quo / 2;
		v[i] = resto;
		i++;
	}
	printf("Numero binario: ");
	for (j=i-1;j>=0;j--)
		printf("%d", v[j]);
}
