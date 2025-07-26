#include <stdio.h>
main (){
	int i, nota = 0, vet[11];
	for (i=0;i<12;i++)
		vet[i] = 0;
	printf("Digite as notas de 0 a 10: ");
	while(1){
		scanf("%d", &nota);
		if (nota >= 0 && nota <=10){
			vet[nota]++;
		}
		else if (nota < 0)
			break;
	}
	for (i=0;i<12;i++){
		if (vet[i] > 0)
		printf("\nNota %d: %d ocorrencia(s)", i, vet[i]);
	}
}
