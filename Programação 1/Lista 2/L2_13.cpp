#include <stdio.h>
main(){
	float alt, peso;
	char sex;
	printf("Digite a altura:");
	scanf("%f", &alt);
	printf("Digite o sexo:");
	fflush(stdin);
	sex = getchar();
	if (sex == 'm' || sex == 'M') {
		peso = (72.7 * alt) - 58;
		printf("Peso ideal:%.1f", peso);
}
	else if (sex == 'f' || sex == 'F') {
		peso = (62.1 * alt) - 44.7;
		printf("Peso ideal:%.1f", peso);
}
	else
		printf("Erro: use apenas F ou f e M ou m");
}
