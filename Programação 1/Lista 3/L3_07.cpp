#include <stdio.h>
main(){
	int v1, v2, v3, v4, aux;
	printf("Digite os valores:\n");
	scanf("%d%d%d%d", &v1, &v2, &v3, &v4);

	if (v1 <= v2){
	 aux = v1;
	 v1 = v2;
	 v2 = aux;
    }
	     if (v1 <= v3){
		 aux = v1;
	     v1 = v3;
		 v3 = aux;
	    }
			 if (v2 <= v3){
			 aux = v3;
		     v3 = v2;
		     v2 = aux;
		    }
		    	if (v4 >= v1){
		    	 aux = v1;
		    	 v1 = v4;
		    	 v4 = aux;
				}
					if (v4 >= v2){
					 aux = v2;
					 v2 = v4;
					 v4 = aux;
					}
						if (v4 >= v3){
						 aux = v3;
						 v3 = v4;
						 v4 = aux;
						}
	printf("Valores em ordem decrescente: %d, %d, %d, %d",v1, v2, v3, v4);
}
