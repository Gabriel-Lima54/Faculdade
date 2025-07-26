#include <stdio.h>
main (){
	int mat;
	float n1, n2, n3, n4, media, aux;
	
	printf("Digite o numero da matricula:\n");
	scanf("%d", &mat);
	printf("Digite as notas das 4 provas:\n");
	scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
	
	if (n1 <= n2){
		aux = n2;
		n2 = n1;
		n1 = aux;
	}
	if (n1 <= n3){
		aux = n3;
		n3 = n1;
		n1 = aux;
	}
	if (n1 <= n4){
		aux = n4;
		n4 = n1;
		n1 = aux;
	}
	if (n2 <= n3){
		aux = n3;
		n3 = n2;
		n1 = aux;
	}
	if (n2 <= n4){
		aux = n4;
		n4 = n2;
		n2 = aux;
	}
	if (n3 <= n4){
		aux = n4;
		n4 = n3;
		n3 = aux;
	}
	printf("%f %f %f %f", n1, n2, n3, n4);
	
	media = (n1 + n2 + n3) / 3;
	
	if (media >= 6){
		printf("\nCodigo do aluno: %d\n", mat);
		printf("Media: %.2f\n", media);
		printf("Aprovado!");
	}
	else {
		printf("Codigo do aluno: %d\n", mat);
		printf("Media: %.2f\n", media);
		printf("Reprovado!");
	}
}
