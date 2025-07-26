#include <stdio.h>
#include <math.h>
main (){
	int w, i, termo, cont = 0;
	while (1){
		printf("Digite o valor W: ");
		scanf("%d", &w);
		if (w == 0)
			break;
		cont++;
		printf("Termo1 = %d\n", w);
		for (i=2;i<=80;i++){
			termo = pow(w, i) + i*w;
			printf("Termo%d = %d\n", i, termo);
		}
	}	
	printf("O numero de valores digitados pelo usuario: %d valores", cont);
	
}
