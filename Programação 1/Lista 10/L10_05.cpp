#include <stdio.h>
main(){
	int v[5], num, i, j, cont = 1, in = 1, igual, flag = 0, aux;
	printf("Digite 5 numeros distintos no maximo de 10 numeros:\n");
	printf("Digite o numero: ");
	scanf("%d", &v[0]);
	i=1;
	do {
		if (cont == 20){
			flag = 1;
			break;
		}
		igual = 0;
		printf("Digite o numero: ");
		scanf("%d", &num);
		for (j=0;j<in;j++)
			if (num == v[j]){
				igual = 1;
				break;
			}
		if (igual == 0){
			v[i] = num;
			i++;
			in++;
		}
		cont++;
	} while(i < 5);
	if (flag == 1)
		printf("\nVoce nao digitou 5 numeros diferentes!");
	else{
		for (i=0;i<5;i++){
			for (j=0;j<4-i;j++){
				if (v[j] > v[j+1]){
					aux = v[j];
					v[j] = v[j+1];
					v[j+1] = aux;
				}
			}
		}
	printf("\nNumeros distintos em ordem crescente: ");
	for (i=0;i<5;i++)
		printf("%d ", v[i]);
	}
}
