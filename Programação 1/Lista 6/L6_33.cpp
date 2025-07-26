#include <stdio.h>
main (){
	int n1, n2, n3, n4, n5, primeiro = 0, segundo = 1, soma, i, cont = 0, maior;
	printf("Digite os 5 numeros inteiros: ");
	scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
	maior = n1;
	if (n2 > maior)
		maior = n2;
	if (n3 > maior)
		maior = n3;
	if (n4 > maior)
		maior = n4;
	if (n5 > maior)
		maior = n5;
	while (1){
		soma = primeiro + segundo;
		if (primeiro == n1 || primeiro == n2 || primeiro == n3 || primeiro == n4 || primeiro == n5)
			cont++;
		primeiro = segundo;
		segundo = soma;
		if (cont == 5){
			printf("Todos os valores estao na sequencia fibonacci");
			break;
		}
		if (soma > maior){
			printf("Nem todos os numeros estao presentes na sequencia");
			break;
		}
	}
	
}
