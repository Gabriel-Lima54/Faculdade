#include <stdio.h>
main(){
	int v[10], vc[10], i, j, ult = 9;
	printf("Digite as 10 valores:\n");
	for (i=0;i<10;i++)
		scanf("%d", &v[i]);
	i = 0;
	while(i < ult){
		if (v[i] <= 0){
			for (j=i;j<ult;j++)
				v[j] = v[j+1];
			ult--;
		}
		else
			i++;
	}
	if (v[ult] <= 0)
		ult--;
	printf("\n\nVetor compactado:\n");
	for (i=0;i<=ult;i++)
		printf("%d  ",v[i]);
}
