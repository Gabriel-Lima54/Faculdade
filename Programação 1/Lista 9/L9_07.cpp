#include <stdio.h>
main(){
	int v[10], i, prim, num;
	printf("Digite as 10 valores da media:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("Valores da media: ");
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
	do {
		printf("\nDigite o novo valor:\n");
		scanf("%d", &num);
		for (i=0;i<9;i++)
			v[i] = v[i + 1];
		v[9] = num;
		printf("\nValores da media: ");
		for (i=0;i<10;i++)
			printf("%d ", v[i]);
	} while (num > 0);
}
