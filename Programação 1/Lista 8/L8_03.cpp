#include <stdio.h>
main(){
	int v[10], i, vezes = 0, j, nmais = 0, vmais = 10, flag[10];
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("\n%d", &v[i]);
		flag[i] = 0;
	}
	for (i=0;i<10;i++){
		if (flag[i] == 0){
			vezes = 1;
			flag[i] = 1;
			for (j=i+1;j<10;j++)
				if (v[i] == v[j]){
					vezes++;
					flag[j] = 1;
				}
			if (vezes <= vmais){
				nmais = v[i];
				vmais = vezes;
			}
		}
	}
	printf("\nO valor que menos aparece eh %d, %d vezes", nmais, vmais);
}
	
