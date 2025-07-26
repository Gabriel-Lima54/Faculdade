#include <stdio.h>
main(){
	int votos = 1, i, j, soma, cand[5], nvotos[5], n, nulos = 0, achou, aux;
	for (i=0;i<5;i++){
		printf("Digite o cadastro do candidato: ");
		scanf("%d", &cand[i]);
		nvotos[i] = 0;
	}
	i = 0;
	while(1){
		achou = 0;
		printf("Digite o cadastro do seu voto");
		scanf("%d", &n);
		if (n == 0)
			break;
		printf("\nDigite o numero de votos: ");
		scanf("%d", &votos);
		for (i=0;i<5;i++)
			if (n == cand[i]){
			nvotos[i] += votos;
			achou = 1;
			break;
			}
		if (achou == 0)
			nulos += votos;
	}
	for (i=0;i<5;i++)
		for(j=0;j<4-i;j++)
			if (cand[j] > cand[j+1]){
				aux = cand[j];
				cand[j] = cand[j+1];
				cand[j+1] = aux;
				aux = nvotos[j];
				nvotos[j] = nvotos[j+1];
				nvotos[j+1] = aux;
			}
	printf("\nCandidatos e votos");
	for (i=0;i<5;i++){
		printf("\n%d - %d votos", cand[i], nvotos[i]);
	}
	printf("\nVotos nulos: ");
	printf("%d", nulos);
}
