#include <stdio.h>
main(){
	int v[20], primo, n1 = 0, n2 = 1, soma = 0, i, p = 0;
	printf("Numeros primos da sequencia de fibonacci:\n");
	while(p<20){
		primo = 1;
		soma = n1 + n2;
		n1 = n2;
		n2 = soma;
		for (i=2;i*i<=soma;i++){
			if (soma % i == 0){
				primo = 0;
				break;
			}
		}
		if (primo == 1){
			v[p] = soma;
			p++;
		}
	}
	for (i=0;i<20;i++)
		printf("%d  ", v[i]);		
}
