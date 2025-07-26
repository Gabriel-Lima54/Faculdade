#include <stdio.h>
main (){
	int i, n, cont1 = 0, cont2 = 0, cont3 = 0, cont4 = 0;
	
	for (i=1;i<=15;i++){
		printf("Digite um valor:\n");
		scanf("%d", &n);
		if (n >= 0 and n <= 25)
			cont1++;
		else if (n >= 25 and n <= 50)
			cont2++;
		else if (n >= 50 and n <= 75)
			cont3++;
		else if (n >= 75 and n <= 100)
			cont4++;
	}
	printf("Foram informados %d valores entre 0 e 25\n", cont1);
	printf("Foram informados %d valores entre 25 e 50\n", cont2);
	printf("Foram informados %d valores entre 50 e 75\n", cont3);
	printf("Foram informados %d valores entre 75 e 100\n", cont4);
	}
	
