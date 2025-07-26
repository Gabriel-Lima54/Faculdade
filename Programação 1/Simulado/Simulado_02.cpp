#include <stdio.h>
main(){
	int v[10], i, np[10], ni[10], ip = 0, ii = 0;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	for (i=0;i<10;i++){
		if (v[i] % 2 == 0){
			np[ip] = v[i];
			ip++;
		}
		else{
			ni[ii] = v[i];
			ii++;
		}
	}
	printf("\nValores pares: ");
	for (i=0;i<ip;i++)
		printf("%d ", np[i]);
	printf("\nValores impares: ");
	for(i=0;i<ii;i++)
		printf("%d ", ni[i]);
}
