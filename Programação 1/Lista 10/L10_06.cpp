#include <stdio.h>
main(){
	int v[10], i , j, aux, va[10], cont = 0;
	printf("Digite os valores:\n");
	for(i=0;i<10;i++){
		scanf("%d", &v[i]);	
		va[i] = 0;
	}
	for (i=0;i<10;i++)
		for (j=0;j<9-i;j++){
			if (v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	for (i=0;i<10;i++){
		if (va[i] == 0){
			cont = 1;
			for (j=i+1;j<10;j++)
				if (v[i] == v[j]){
					cont++;
					va[j] = 1;
				}
		}
		printf("O valor %d aparece %d vez(es)\n", v[i], cont);
	}
