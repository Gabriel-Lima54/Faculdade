#include <stdio.h>
main (){
	int i, valor = 1;
	printf("%d ", valor);
	for (i=1;i<=4;i++){
		valor += 2;
		printf("%d ", valor);
	}
}
