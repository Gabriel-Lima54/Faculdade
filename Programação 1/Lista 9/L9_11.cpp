#include <stdio.h>
main(){
	int v[10], i, vd[5], j, flag;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nDigite os outros 10 valores:\n");
	for (i=0;i<5;i++)
		scanf("%d", &vd[i]);
	for (i=0;i<10;i++){
		flag = 0;
		for (j = 0;j<5;j++)
		if (v[i] % vd[j] == 0){
			printf("\nNumero %d\nDivisivel por %d na posicao %d", v[i], vd[j], j);
			flag = 1;
		}
		if (flag == 0)
			printf("\nNumero %d nao eh divisivel por nenhum dos divisores", v[i]);
	}
	
}
