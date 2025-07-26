#include <stdio.h>
main(){
	int v1, v2, v3, aux, mai, med, men, cod;
	printf("Digite os valores:\n");
	scanf("%d%d%d", &v1, &v2, &v3);
	printf("Digite o codigo i:\n");
	scanf("%d", &cod);
	
	if (v1 >= v2){
	 aux = v1;
	 v1 = v2;
	 v2 = aux;
    }
	     if (v1 >= v3){
	     aux = v1;
		 v1 = v3;
		 v3 = aux;
	    }
			 if (v2 >= v3){
		     aux = v3;
		     v3 = v2;
		     v2 = aux;
		    }
	men = v1;
	med = v2;
	mai = v3;
	
	if (cod == 1)
		printf("Valores em ordem crescente: %d,%d,%d", men, med, mai);
	else if (cod == 2)
		printf("Valores em ordem decrescente: %d, %d, %d", mai, med, men);
	else if (cod == 3)
		printf("Valores com o maior ao centro: %d, %d, %d", men, mai, med);
	else 
		printf("Codigo invalido");
}

