#include <stdio.h>
main(){
	int v[10], i, vezes = 0, j, nmais = 0, vmais = 0;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("\n%d", &v[i]);
	}
	for (i=0;i<10;i++){
		vezes = 1;
		for (j=i+1;j<10;j++)
			if (v[i] == v[j]){
				vezes++;
			}
		if (vezes > vmais){
			nmais = v[i];
			vmais = vezes;
		}
	}
	printf("\nO valor que mais aparece eh %d, %d vezes", nmais, vmais);
}
	
