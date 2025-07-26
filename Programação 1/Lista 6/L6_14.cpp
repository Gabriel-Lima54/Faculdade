#include <stdio.h>
main (){
	int valor = 1, i, soma = 0, perfeito = 0;
		printf("Os 4 primeiros numeros perfeitos: ");
			while(perfeito < 4){
				for (i=1;i<valor;i++)
					if(valor % i == 0)
						soma += i;
					if (soma == valor){
						printf("\n%d", valor);
						perfeito++;
					}
			valor++;
			soma = 0;
		}
	}

