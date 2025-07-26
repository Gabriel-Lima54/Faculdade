#include <stdio.h>
main (){
	int primeiro = 0, segundo = 1, soma, i;
	printf ("%d, %d", primeiro, segundo);
	for (i=3;i<=10;i++){
		soma = primeiro + segundo;
		printf(" %d,", soma);
		primeiro = segundo;
		segundo = soma;
	}
}
