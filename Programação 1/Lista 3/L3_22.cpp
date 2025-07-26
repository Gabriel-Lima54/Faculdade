#include <stdio.h>
#include <math.h>
main(){
	float x1, x2, x3, x4, y1, y2, y3, y4, d1, d2, d3, d4;
	printf("Digite o X e o Y da primeira coordenada:\n");
	scanf("%f%f", &x1, &y1);
	printf("Digite o X e o Y da segunda coordenada:\n");
	scanf("%f%f", &x2, &y2);
	printf("Digite o X e o Y da terceira coordenada:\n");
	scanf("%f%f", &x3, &y3);
	printf("Digite o X e o Y da quarta coordenada:\n");
	scanf("%f%f", &x4, &y4);
	
	d1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	d2 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));
	d3 = sqrt(pow(x3 - x4, 2) + pow(y3 - y4, 2));
	d4 = sqrt(pow(x4 - x1, 2) + pow(y4 - y1, 2));
	
	if (d1 == d2 && d2 == d3 && d3 == d4)
		printf("Os pontos formam um quadrado");
	else 
		printf("Os pontos nao formam um quadrado");
}
