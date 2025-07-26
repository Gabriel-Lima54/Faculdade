#include <stdio.h>
main (){
	int num, i, quo, x;
	for (i=1;i<=10;i++){
	printf("Digite o valor: ");
	scanf("%d", &num);
	quo = 0;
	for (x=2;x<=num;x++){
	if (num % x == 0)
		quo += x;
	if (quo == num)
		printf("Eh um valor primo\n");
	}
	}
}
