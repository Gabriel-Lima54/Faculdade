#include <stdio.h>
main(){
	int v[10], i, f[10], vezes, j;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("\n%d", &v[i]);
		f[i] = 0;
	}
	for (i=0;i<10;i++){
		if(f[i] == 0){
			vezes = 1;
			f[i] = 1;
			for (j=i+1;j<10;j++)
				if (v[i] == v[j]){
					vezes++;
					f[j]=1;
				}
			printf("\nO valor %d aparece %d vezes", v[i], vezes);
		}
	}
}
	
