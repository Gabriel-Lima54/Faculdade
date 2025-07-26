#include <stdio.h>
main (){
	int mat, conceito;
	float n1, n2, n3, media, aux, rp;
	
	printf("Digite o numero da matricula:\n");
	scanf("%d", &mat);
	printf("Digite as notas das 3 provas:\n");
	scanf("%f%f%f", &n1, &n2, &n3);

  if (n1 >= n2){
    aux = n2;
    n2 = n1;
    n1 = aux;
}
  if (n1 >= n3){
    aux = n3;
    n3 = n1;
    n1 = aux;
}
  if (n2 >= n3){
    aux = n3;
    n3 = n2;
    n2 = aux;
}

	media = 3 / (1/n1 +1/n2 +1/n3);
	
	if (n1 == 0 ){
		media = 0;
			if ((3 / (1/10 + 1/n2 + 1/n3) >= 6.0)){
				printf("\nReprovado, digite o valor da prova de recuperacao:\n");
				scanf("%f", &rp);
				media = 3 / (1/rp +1/n2 +1/n3);
			}
				else if ((3 / (1/10 + 1/n2 + 1/n3) < 6.0))
						printf("\nReprovado, sem chance de recuperacao");
					}
	else if (media < 6.0){
			media = (3 / (1/10 + 1/n2 + 1/n3));
				if (media < 6.0)
					printf("\nReprovado, sem chance de recuperacao");
				else{
						printf("\nReprovado, digite o valor da prova de recuperacao:\n");
						scanf("%f", &rp);
						media = 3 / (1/rp +1/n2 +1/n3);
		}
	}
	if (media < 6.0)
		conceito = 0;
	else if (media < 7.0)
		conceito = 1;
	else if (media < 8.0)
		conceito = 2;
	else if (media < 9.0)
		conceito = 3;
	else if (media >= 9.0)
		conceito = 4;
	
	printf("\nMatricula: %d\n", mat);
	printf("Media final: %.2f\n", media);
	printf("Conceito: %d\n", conceito);
}
