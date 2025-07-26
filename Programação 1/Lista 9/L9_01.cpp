#include <stdio.h>
main(){
	int i, v[10];
	printf("Digite 10 valores inteiros:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	printf("\nValores e seus simetricos:\n");
	for (i=0;i<10;i++){
		printf("\n%d - %d", v[i], v[9 - i]);
	}
}
