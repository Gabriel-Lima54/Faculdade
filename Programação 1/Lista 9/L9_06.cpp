#include <stdio.h>
main(){
	int v[6], i, prim, j, maior;
	printf("Digite os 6 elementos:\n");
	for (i=0;i<6;i++)
		scanf("%d", &v[i]);
	maior = v[0];
	for (i=1;i<6;i++){
		if (v[i] > maior)
			maior = v[i];
	}
	while (1){
		prim = v[0];
		for (j=0;j<5;j++)
			v[j] = v[j + 1];
		v[5] = prim;
		if (v[0] == maior)
			break;
		}
	printf("lista com o maior valor na primeira posicao:  ");
	for (i=0;i<6;i++)
		printf("%d  ", v[i]);
}
