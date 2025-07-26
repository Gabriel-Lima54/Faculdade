#include <stdio.h>
main(){
	int id;
	printf("Digite a idade do nadador:");
	scanf("%d", &id);
	if (id >= 18)
		printf("Nadador senior");
	if (id >= 14 and id <= 17)
		printf("Nadador juvenil B");
	if (id >= 11 and id <= 13)
		printf("Nadador juvenil A");
	if (id >= 8 and id <= 10)
		printf("Nadador infantil A");
	if (id >= 5 and id <= 7)
		printf("Nadador infantil B");
}
