#include <stdio.h>
main (){
	int d1, m1, a1, d2, m2, a2;
	
	printf("Digite o dia da primeira data:\n");
	scanf("%d", &d1);
	printf("Digite o mes da primeira data:\n");
	scanf("%d", &m1);
	printf("Digite o ano da primeira data:\n");
	scanf("%d", &a1);
	printf("Digite o dia da segunda data:\n");
	scanf("%d", &d2);
	printf("Digite o mes da segunda data:\n");
	scanf("%d", &m2);
	printf("Digite o ano da segunda data:\n");
	scanf("%d", &a2);
	
	if (a2 > a1)
		printf("%d / %d / %d e %d / %d / %d", d1, m1, a1, d2, m2, a2);
	else if (a1 > a2)
		printf("%d / %d / %d e %d / %d / %d", d2, m2, a2, d1, m1, a1);
	else {
		if (m1 > m2)
			printf("%d / %d / %d e %d / %d / %d", d2, m2, a2, d1, m1, a1);
		else if (m2 > m1)
			printf("%d / %d / %d e %d / %d / %d", d1, m1, a1, d2, m2, a2);
		else{
			if (d1 >= d2)
				printf("%d / %d / %d e %d / %d / %d", d2, m2, a2, d1, m1, a1);
			else 
				printf("%d / %d / %d e %d / %d / %d", d1, m1, a1, d2, m2, a2);
		}
	}
}
