#include <stdio.h>
main (){
	int valor, i, piramidal = 0, x, soma, p1 = 2, p2 = 3, p3 = 5, proximo, primo;
	
	printf("Digite um valor: ");
	scanf("%d", &valor);
	
	while (piramidal < 10){
		soma = p1 + p2 + p3;
		
		if (soma >= valor){
			printf("\n%d", soma);
			piramidal++;
		}
		
		proximo = p3 + 1;
		while (1){
			primo = 1;
			
			for (i=2;i*i<=proximo;i++)
				if (proximo % i == 0){
					primo = 0;
					break;
				}
				if (primo == 1)
					break;
				else
					proximo++;
		}
		p1 = p2;
		p2 = p3;
		p3 = proximo;	
	}
}
