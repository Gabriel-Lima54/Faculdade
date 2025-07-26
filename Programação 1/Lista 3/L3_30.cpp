#include <stdio.h>
main (){
	int hor, min, seg;
	
	printf("Digite as horas:\n");
	scanf("%d", &hor);
	printf("Digite os minutos:\n");
	scanf("%d", &min);
	printf("Digite os segundos:\n");
	scanf("%d", &seg);
	
	seg++;
	
	if (seg == 60){
		seg = 0;
		min++;
	if (min == 60){
		min = 0;
		hor++;
	if (hor == 24){
		hor = 0;
		min = 0;
		seg = 0;
	}
	}
	}
	printf("Horario seguinte: %d:%d:%d", hor, min, seg);
}
