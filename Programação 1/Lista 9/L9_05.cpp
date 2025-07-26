#include <stdio.h>
main(){
	int v[15], i, rot, prim, j;
	printf("Digite 15 valores reais:\n");
	for (i=0;i<15;i++)
		scanf("%d", &v[i]);
	printf("Digite quantas rotacoes para a esquerda:\n");
	scanf("%d", &rot);
	for (i=1;i<=rot;i++){
		prim = v[0];
		for(j = 0;j < 14;j++){
			v[j] = v[j+1];
		}
		v[14] = prim;
	}
	printf("Lista apos %d rotacoes:\n", rot);
	for (i=0;i<15;i++)
		printf("%d  ", v[i]);
}
