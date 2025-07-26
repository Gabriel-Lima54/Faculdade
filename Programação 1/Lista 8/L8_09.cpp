#include <stdio.h>
main (){
	int i = 0, v[10], aux = 0;
	printf("Digite 10 numeros positivos:\n");
	while(i<10){
		scanf("%d", &aux);
		if (aux > 0){
			v[i] = aux;
			i++;
		}
		else
			printf("\nValor invalido");
	}
	printf("\nNumeros armazenados na ordem contraria: ");
	for (i=9;i>=0;i--)
		printf("%d ", v[i]);
}
