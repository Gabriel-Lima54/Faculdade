#include <stdio.h>
#include <math.h>
main (){
	float a, b, c, x1, x2, delta, temp;
	
	printf("Digite os 3 valores para a equacao:\n");
	scanf("%f%f%f", &a, &b, &c);
	
	delta = b * b - 4 * a * c;
	
	if (delta > 0){
		x1 = ((-b - sqrt(delta))) / (2 * a);
		x2 = ((-b + sqrt(delta))) / (2 * a);
			if (x1 > x2) {
   				temp = x1;
   				x1 = x2;
    			x2 = temp;
    		}
	printf("As raizes sao: %.2f, %.2f", x1, x2);
}
	else 
		printf("A equacao nao possui valores reais");
}		
