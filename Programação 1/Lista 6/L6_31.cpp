#include <stdio.h>
main (){
	int primeiro = 0, segundo = 1, soma, i, x, primo;
	for (i=1;i<=20;i++){
		soma = primeiro + segundo;
		primo = 1;
		for (x=2;x*x<=soma;x++)
			if (soma % x == 0)
				primo = 0;
		if (primo == 1)
			printf(" %d,", soma);
		primeiro = segundo;
		segundo = soma;
	}
}
