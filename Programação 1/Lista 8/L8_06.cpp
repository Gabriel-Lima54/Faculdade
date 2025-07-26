#include <stdio.h>
main(){
	int aux, i, cont = 0;
	int n0 = 0, n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, n7 = 0, n8 = 0, n9 = 0, n10 = 0;
	printf("Digite as notas entre 0 e 10:\n");
	while (1){
		scanf("\n%d", &aux);
		
		if (aux < 0) break;
	
		switch (aux) {
			case 0:
				n0++; break;
			case 1:
				n1++; break;
			case 2:
				n2++; break;
			case 3:
				n3++; break;
			case 4:
				n4++; break;
			case 5:
				n5++; break;
			case 6:
				n6++; break;
			case 7:
				n7++; break;
			case 8:
				n8++; break;
			case 9:
				n9++; break;
			case 10:
				n10++; break;
		}
	}
	if (n0 > 0) printf("\nNota 0: %d ocorrencias", n0);
	if (n1 > 0) printf("\nNota 1: %d ocorrencias", n1);
	if (n2 > 0) printf("\nNota 2: %d ocorrencias", n2);
	if (n3 > 0) printf("\nNota 3: %d ocorrencias", n3);
	if (n4 > 0) printf("\nNota 4: %d ocorrencias", n4);
	if (n5 > 0) printf("\nNota 5: %d ocorrencias", n5);
	if (n6 > 0) printf("\nNota 6: %d ocorrencias", n6);
	if (n7 > 0) printf("\nNota 7: %d ocorrencias", n7);
	if (n8 > 0) printf("\nNota 8: %d ocorrencias", n8);
	if (n9 > 0) printf("\nNota 9: %d ocorrencias", n9);
	if (n10 > 0) printf("\nNota 10: %d ocorrencias", n10);
}
