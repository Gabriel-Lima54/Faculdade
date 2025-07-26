#include <stdio.h>
main(){
	int v[100], i, num, primo, ip = 0, j, aux, valor;
	printf("Escreva o numero de primos: ");
	scanf("%d", &num);
	i = 0;
	valor = 2;
	while (i < num){
		primo = 1;
		for (j = 2;j * j <= valor;j++){
			if (valor % j == 0){
				primo = 0;
				break;
			}
		}
		if (primo == 1){
			v[i] = valor;
			ip++;
			i++;
		}
		valor++;
	}
	for (i=0;i<ip;i++){
		for (j=0;j<ip - 1;j++){
			if (v[j] < v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
	printf("\nNumeros primos em ordem decrescente: ");
	for (i=0;i<ip;i++)
		printf("%d ", v[i]);
}
	
	
	
