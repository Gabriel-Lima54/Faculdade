#include <stdio.h>
main (){
	int can1, can2, can3, can4, can5, v1, v2, v3, v4, v5, st1, st2;
	float total, p1, p2, p3, p4, p5;
	
	printf("Digite o codigo do primeiro candidato e o numero de votos:\n");
	scanf("%d%d", &can1, &v1);
	printf("Digite o codigo do segundo candidato e o numero de votos:\n");
	scanf("%d%d", &can2, &v2);
	printf("Digite o codigo do terceiro candidato e o numero de votos:\n");
	scanf("%d%d", &can3, &v3);
	printf("Digite o codigo do quarto candidato e o numero de votos:\n");
	scanf("%d%d", &can4, &v4);
	printf("Digite o codigo do quinto candidato e o numero de votos:\n");
	scanf("%d%d", &can5, &v5);
	
	total = v1 + v2 + v3 + v4 + v5;
	p1 = ((v1 * 100) / total);
	p2 = ((v2 * 100) / total);
	p3 = ((v3 * 100) / total);
	p4 = ((v4 * 100) / total);
	p5 = ((v5 * 100) / total);
	
	if (v1 > (total / 2) + 1)
		printf("Ganhador da eleicao em primeiro turno: candidato %d", can1);
	else if (v2 > (total / 2) + 1)
		printf("Ganhador da eleicao em primeiro turno: candidato %d", can2);
	else if (v3 > (total / 2) + 1)
		printf("Ganhador da eleicao em primeiro turno: candidato %d", can3);
	else if (v4 > (total / 2) + 1)
		printf("Ganhador da eleicao em primeiro turno: candidato %d", can4);
	else if (v5 > (total / 2) + 1)
		printf("Ganhador da eleicao em primeiro turno: candidato %d", can5);
	else {
		printf("Eleicao vai pro segundo turno\n");
		if  ((p1 >= p2 && p1 >= p3 && p1 >= p4 && p1 <= p5) ||
			(p1 <= p2 && p1 >= p3 && p1 >= p4 && p1 >= p5) ||
			(p1 >= p2 && p1 <= p3 && p1 >= p4 && p1 >= p5) ||
			(p1 >= p2 && p1 >= p3 && p1 <= p4 && p1 >= p5) ||
			(p1 >= p2 && p1 >= p3 && p1 >= p4 && p1 <= p5))
			printf("Candidato %d com %.2f%% dos votos\n", can1, p1);
		if	((p2 >= p1 && p2 >= p3 && p2 >= p4 && p2 <= p5) ||
			(p2 <= p1 && p2 >= p3 && p2 >= p4 && p2 >= p5) ||
			(p2 >= p1 && p2 <= p3 && p2 >= p4 && p2 >= p5) ||
			(p2 >= p1 && p2 >= p3 && p2 <= p4 && p2 >= p5) ||
			(p2 >= p1 && p2 >= p3 && p2 >= p4 && p2 <= p5))
			printf("Candidato %d com %.2f%% dos votos\n", can2, p2);
		if  ((p3 >= p2 && p3 >= p1 && p3 >= p4 && p3 >= p5) ||
			(p3 <= p2 && p3 >= p1 && p3 >= p4 && p3 >= p5) ||
			(p3 >= p2 && p3 <= p1 && p3 >= p4 && p3 >= p5) ||
			(p3 >= p2 && p3 >= p1 && p3 <= p4 && p3 >= p5) ||
			(p3 >= p2 && p3 >= p1 && p3 >= p4 && p3 <= p5))
			printf("Candidato %d com %.2f%% dos votos\n", can3, p3);
		if  ((p4 >= p2 && p4 >= p3 && p4 >= p1 && p4 >= p5) ||
			(p4 <= p2 && p4 >= p3 && p4 >= p1 && p4 >= p5) ||
			(p4 >= p2 && p4 <= p3 && p4 >= p1 && p4 >= p5) ||
			(p4 >= p2 && p4 >= p3 && p4 <= p1 && p4 >= p5) ||
			(p4 >= p2 && p4 >= p3 && p4 >= p1 && p4 <= p5))
			printf("Candidato %d com %.2f%% dos votos\n", can4, p4);
		if  ((p5 >= p2 && p5 >= p3 && p5 >= p4 && p5 >= p1) ||
			(p5 <= p2 && p5 >= p3 && p5 >= p4 && p5 >= p1) ||
			(p5 >= p2 && p5 <= p3 && p5 >= p4 && p5 >= p1) ||
			(p5 >= p2 && p5 >= p3 && p5 <= p4 && p5 >= p1) ||
			(p5 >= p2 && p5 >= p3 && p5 >= p4 && p5 <= p1))
			printf("Candidato %d com %.2f%% dos votos\n", can5, p5);
	}
}
