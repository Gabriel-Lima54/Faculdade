#include <stdio.h>
main(){
	int v1, v2, v3;
	printf("Digite os valores:\n");
	scanf("%d%d%d", &v1, &v2, &v3);
	
	if (v1 >= v2 && v1 >= v3)
		printf("Maior valor:%d", v1);
	else if (v2 >= v1 && v2 >= v3)
		printf("Maior valor:%d", v2);
	else if (v3 >= v1 && v3 >= v2)
		printf("Maior valor:%d", v3);
}
