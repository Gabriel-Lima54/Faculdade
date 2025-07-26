#include <stdio.h>
main (){
	int num, i, quo = 0;
	printf("Digite o primeiro valor: ");
	scanf("%d", &num);
	for (i=2;i<=num;i++){
		if (num % i == 0)
			quo += i;
	}
	if (quo == num)
		printf("%d eh um valor primo", num);
	else
		printf("%d nao eh primo", num);
}
