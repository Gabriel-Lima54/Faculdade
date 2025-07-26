#include <stdio.h>
main (){
	int hc, mc, hf, mf, total;
	
	printf("Digite as horas e minutos do comeco:\n");
	scanf("%d%d", &hc, &mc);
	printf("Digite as horas e minutos do fim");
	scanf("%d", &hf, &mf);
	
	if (h1 < hf)
		total = (hf * 60 + mf) - (hi * 60 + mi);
	else if (hi > hf)
		  total = (1440--) + (hf * 60 + mf);
		else 
          total = mf - mi;
	printf("O evento durou %d horas e %d minutos", total / 60, total % 60);

