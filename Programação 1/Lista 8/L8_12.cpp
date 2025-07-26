#include <stdio.h>
main (){
	int primo, v[10], i = 0, num = 100, j;
	printf("Numeros primos num vetor: ");
	while(i<10){
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
	printf("Os primeiros 10 numeros primos acima de 100 sao: ");
	for (i=0;i<10;i++)
		printf("%d ", v[i]);
}

