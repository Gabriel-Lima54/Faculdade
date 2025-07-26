#include <stdio.h>
main(){
	float n1, n2, n3;
	printf("Digite os valores:");
	scanf("%f%f", &n1, &n2);
    if (n1 > n2){
    	n3 = n1 - n2;
    	printf("%.2f - %.2f = %.2f", n1, n2, n3);
    }
    else {
    	n3 = n2 - n1;
    	printf("%.2f - %.2f = %.2f", n2, n1, n3);
    }
}
