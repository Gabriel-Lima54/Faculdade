#include <stdio.h>
main (){
	int mat;
	float n1, n2, n3, media;
	
	printf("Digite o numero da matricula:\n");
	scanf("%d", &mat);
	printf("Digite as notas das 3 provas:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	
	media = (7.5 * 3 + 6 * 3 + 9.5 * 4) / 10;
	
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
