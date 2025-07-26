#include <stdio.h>
main(){
	int v[10], i, num, ult = 0, aux, j;
	printf("Digite os 10 valores");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
		ult++;
	for (i=0;i<10;i++)
		for(j=0;j<9-i;j++){
			if (v[j] > v[j+1]){
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
	for (i=0;i<5;i++){
		printf("Digite o novo valor: ");
		scanf("%d", &num);
		j = ult - 1;
		while(j >= 0 && v[j] > num){
			v[j+1] = v[j];
			j--;
		}
		v[j + 1] = num;
		ult++;
	}
}
