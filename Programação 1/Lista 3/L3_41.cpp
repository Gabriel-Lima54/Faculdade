#include <stdio.h>
main (){
	int temp;
	float sal, bonus;
	char sexo;
	
	fflush(stdin);
	
	printf("Digite o sexo do funcionario:\n");
	sexo = getchar();
	printf("Digite o tempo de casa:\n");
	scanf("%d", &temp);
	printf("Digite o salario:\n");
	scanf("%f", &sal);
	
	if (sexo == 'm' || sexo == 'M'){
		if (temp > 15)
			bonus = sal * 0.20;
		else 
			bonus = 1000;
	}
	else if (sexo == 'f' || sexo == 'F'){
		if (temp > 10)
			bonus = sal * 0.25;
		else 
			bonus = 1000;
	}
	printf("O total do bonus eh: %.2f", bonus);
}
