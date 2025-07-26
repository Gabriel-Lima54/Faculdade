#include <stdio.h>
main (){
	int i, quo, ultimo = 0, valor, aux;
	
	printf("Digite o valor: ");
	scanf("%d", &valor);
	printf("Proximo valor primo maior que %d:\n", valor);
	aux = valor;
	while (1){
		quo=0;
		aux++;
		for (i=2;i<=aux/2;i++)
			if (aux % i == 0)
				quo++;
		if (quo == 0)
			break;
	}
	printf("%d", aux);
}
