#include <stdio.h>
main(){
	int v1, v2, v3, aux;
	printf("Digite os valores:\n");
	scanf("%d%d%d", &v1, &v2, &v3);
	if (v1 >= v2){
	 aux = v1;
	 v1 = v2;
	 v2 = aux;
    }
	    else if (v1 >= v3){
	     aux = v1;
		 v1 = v3;
		 v3 = aux;
	    }
			else if (v2 >= v3){
		     aux = v3;
		     v3 = v2;
		     v2 = aux;
		    }
	printf("Valores em ordem crescente: %d,%d,%d", v1, v2, v3);
}
