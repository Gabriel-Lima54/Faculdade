#include <stdio.h>
main (){
	int valor, resto, original, soma = 0, pd, sd;
	printf("Escreva os primeiros 9 digitos: ");
	scanf("%d", &valor);
	original = valor;
	while (1){
		resto = valor % 10;
		valor /= 10;
		soma += resto;
		if (valor <= 0) break;
		}
	pd = soma % 11;
	if (pd == 0 || pd == 1)
		pd = 0;
	else
		pd = 11 - pd;
		
	soma = soma + pd;
	sd = soma % 11;
	if (sd == 0 ||sd == 1)
		sd = 0;
	else
		sd = 11 - sd;
	printf("Os valores do primeiro e segundo digito sao %d / %d", pd, sd);
}
