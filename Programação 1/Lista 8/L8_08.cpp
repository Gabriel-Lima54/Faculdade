#include <stdio.h>
main (){
	int i = 0, v[20], aux = 0;
	printf("Digite 20 numeros impares:\n");
	while(i<20){
		scanf("%d", &aux);
		if (aux % 2 != 0){
			v[i] = aux;
			i++;
		}
		else if (aux % 2 == 0)
			printf("\nValor par invalido");
	}
	printf("\nNumeros armazenados: ");
	for (i=0;i<20;i++)
		printf("%d ", v[i]);
}
