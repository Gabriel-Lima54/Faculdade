#include <stdio.h>
main(){
	int i = 0, v[25], flag[25], j, num = 0;
	printf("Digite as notas entre 0 e 10:\n");
	while (i<25){
		scanf("\n%d", &v[i]);
		if (v[i] >= 0 && v[i] <= 10){
			flag[i] = 0;
			i++;
		}
		else
			printf("Digite um valor valido!\n");
	}
	printf("\nHistograma\n");
	while(num < 11){
		printf("\n%d ", num);
		for (i=0;i<25;i++){
			if (flag[i] == 0){
				if (v[i] == num){
					printf("*");
				}
			}
		}
		num++;
	}
}
