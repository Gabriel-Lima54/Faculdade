#include <stdio.h>
main(){
	int v[10], i, r, prim = 0, cont = 0;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("Digite o valor R: ");
	scanf("%d", &r);
	while (cont < r){
		prim = v[0];
		for (i=0;i<10;i++){
			v[i] = v[i+1];
		}
		v[9] = prim;
		cont++;
	}
	printf("Vetor rodado %d vezes: ", r);
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
}
