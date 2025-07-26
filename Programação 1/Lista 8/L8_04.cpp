#include <stdio.h>
main(){
	int i = 0, j, v[10], flag[10], vezes = 0, cont=0;
	printf("Digite os 10 valores entre 1 e 10:\n");
	while(i<10){
		scanf("\n%d", &v[i]);
		if (v[i] >= 1 && v[i] <= 10){
			flag[i] = 0;
			i++;
		}
		else
			printf("Valor fora dos paramentros, digite novamente\n");
	}
	for (i=0;i<10;i++){
		if (flag[i] == 0){
			vezes=1;
			flag[i] = 1;
			for (j=i+1;j<10;j++){
				if (v[i] == v[j]){
					vezes++;
					flag[j] = 1;
				}
			}
			if (vezes > 1){
				printf("\nO numero %d repetiu %d vezes", v[i], vezes);
				cont++;
			}
		}
	}
	printf("\nO programa tem %d numeros repetidos", cont);
}
