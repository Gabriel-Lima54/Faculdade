#include <stdio.h>
main(){
	int v[10], v2[5], i, soma, vp[10], vi[10], flag, j, ip = 0, ii = 0;
	printf("Digite os 10 valores do primeiro vetor:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nDigite os 5 valores do segundo vetor:\n");
	for (i=0;i<5;i++)
		scanf("%d", &v2[i]);
	i = 0;
	while(i < 10){
		soma = 0;
		flag = 0;
		if (v[i] % 2 == 0)
			for (j=0;j<5;j++){
				soma += v[i] + v2[j];
				flag = 1;
			}
		else
			for (j=0;j<5;j++)
				soma += v[i] + v2[j];
		if (flag == 1){
			vp[ip] = soma;
			ip++;
		}
		else{
			vi[ii] = soma;
			ii++;
		}
		i++;
	}
	printf("\nVetor par: ");
	for (i=0;i<ip;i++)
		printf("%d ", vp[i]);
	printf("\nVetor impar: ");
	for (i=0;i<ii;i++)
		printf("%d ", vi[i]);
}
