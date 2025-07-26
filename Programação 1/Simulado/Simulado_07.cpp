#include <stdio.h>
main(){
	int v[10], v1[10], vt[20], i, ult = 0, novo, j;
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("%d", &v[i]);
	}
	printf("Digite os 10 valores:\n");
	for (i=0;i<10;i++){
		scanf("%d", &v1[i]);
	}
	for (i=0;i<10;i++){
		vt[ult] = v[i]
		ult++;
	}
	for (i=0;i<10;i++){
		novo = 1;
		for (j=0,j<ult;j++){
			for (v1[i] == vt[j]){
				novo = 0;
				break;
			}
		}
		if (novo == 1){
			vt[ult] = v2[i]
			ult++;
		}
	}
}
