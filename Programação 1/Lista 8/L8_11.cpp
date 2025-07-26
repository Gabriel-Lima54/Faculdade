#include <stdio.h>
main (){
	int primo, v[20], i = 0, num = 2, j;
	printf("Numeros primos num vetor: ");
	v[0] = 2;
	while(i<20){
		primo = 1;
		for(j=2;j*j<=num;j++){
			if (num% j == 0){
				primo = 0;
				break;
			}
		}
		if (primo == 1){
			v[i] = num;
			i++;
		}
		num++;
	}
	printf("Os primeiros 20 numeros primos sao:");
	for (i=0;i<20;i++)
		printf("%d ", v[i]);
}

