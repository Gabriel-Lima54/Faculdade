#include <stdio.h>
main (){
	int di,mi,ai,df,mf,af, dc = 0;
	printf("Digite o dia,mes e ano de inicio, respectivamente:\n");
	scanf("%d%d%d", &di,&mi,&ai);
	printf("Digite o dia,mes e ano de fim, respectivamente:\n");
	scanf("%d%d%d", &df,&mf,&af);
	while(1){
		di++;
		dc++;
		if (mi == 1 || mi == 3 || mi == 5 || mi == 8 || mi == 10){
			if (di > 31){
				di = 1;
				mi++;
			}
		}
		else if (mi == 4 || mi == 6 || mi == 7 || mi == 9 || mi == 11){
			if (di > 30){
				di = 1;
				mi++;
			}
		}
		else if (mi == 2){
			if (di > 28){
				di = 1;
				mi++;
			}
		}
		else if (mi > 12){
			if(di > 31){
				di = 1;
				mi = 1;
				ai++;
			}
		}
		if (di == df && mi == mf && ai == af)
			break;
	}
	printf("Total de dias: %d", dc);
}

