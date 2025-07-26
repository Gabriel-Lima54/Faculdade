#include <stdio.h>
main (){
	float n1, n2, n3, n4, media;
	int mat;

	printf("Digite o numero da matricula do aluno:\n");
	scanf("%d", &mat);
	printf("Digite as tres notas do aluno:\n");
	scanf("%f%f%f", &n1, &n2, &n3);
	printf("Digite o valor dos exercicios:\n");
	scanf("%f", &n4);
	
	media = (n1 + 2 * n2 + 2 * n3 + 4 * n4) / 10;
	
	if (media < 4.0){
			printf("\nNotas do aluno: %.2f, %.2f, %.2f e %.2f\n", n1, n2, n3, n4);
			printf("Media: %.2f\n", media);
			printf("Conceito: E\n");
			printf("Situacao: reprovado");
	}
	else if (media < 6.0){
			printf("\nNotas do aluno: %.2f, %.2f, %.2f e %.2f\n", n1, n2, n3, n4);
			printf("Media: %.2f\n", media);
			printf("Conceito: D\n");
			printf("Situacao: reprovado");
	}
	else if (media < 7.5){
			printf("\nNotas do aluno: %.2f, %.2f, %.2f e %.2f\n", n1, n2, n3, n4);
			printf("Media: %.2f\n", media);
			printf("Conceito: C\n");
			printf("Situacao: aprovado");
	}
	else if (media < 9.0){
			printf("\nNotas do aluno: %.2f, %.2f, %.2f e %.2f\n", n1, n2, n3, n4);
			printf("Media: %.2f\n", media);
			printf("Conceito: B\n");
			printf("Situacao: aprovado");
	}
	else if (media >= 9.0){
			printf("\nNotas do aluno: %.2f, %.2f, %.2f e %.2f\n", n1, n2, n3, n4);
			printf("Media: %.2f\n", media);
			printf("Conceito: A\n");
			printf("Situacao: aprovado");
	}
}

