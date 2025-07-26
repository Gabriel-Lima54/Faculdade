#include <stdio.h>
main (){
	int i, primo = 0, num = 1, cont = 0, quo;
	printf("Os 50 primeiros numeros primos sao:\n");
	while (primo<=50){
		num++;
		quo = 0;
		for(i=2;i<=num;i++)
			if (num % i == 0)
				quo += i;
			if (num == quo){
				primo++;
				printf("%d\n", num);
			}
	}
}
